#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H
#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<initializer_list>
#include<stdexcept>
class StrBlobPtr;	
class StrBlob{
    friend class StrBlobPtr;
    public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> );
    StrBlob(const StrBlob& orig):data(orig.data){}
    StrBlob& operator=(const StrBlob&);
    size_type size() const {return data->size();}
    bool empty() const{return data->empty();}
        void push_back(const std::string& t) const   {data->push_back(t);}
	void push_back(std::string&& s) const {data->push_back(std::move(s));}
    void pop_back() const;
    //std::string& front();
    //std::string& back();
    std::string& front() const ;
    std::string& back() const ;
    StrBlobPtr begin();
    StrBlobPtr end();
    private:
    std::shared_ptr<std::vector<std::string> > data;
    void check(size_type , const std::string& ) const ;
};
class StrBlobPtr{
friend class StrBlob;
    public:
        StrBlobPtr():curr(0){}
        StrBlobPtr(StrBlob &a, size_t sz=0):wptr(a.data),curr(sz){ }
        std::string& deref() const;
        StrBlobPtr& incr();
    private:
        std::shared_ptr<std::vector<std::string>> check(std::size_t , const std::string&) const;
        std::weak_ptr<std::vector<std::string>> wptr;
        std::size_t curr;
};




StrBlob& StrBlob::operator=(const StrBlob& rhs)
{
data=rhs.data;
return *this;
}


StrBlob::StrBlob():data(std::make_shared<std::vector<std::string> > () ){}

StrBlob::StrBlob(std::initializer_list<std::string> i1):data(std::make_shared<std::vector<std::string>>(i1)){}

void StrBlob::check(size_type i,const std::string& msg) const
{
    if(i>= data->size()) 
        throw std::out_of_range(msg);
}


void StrBlob::pop_back() const
{
    check(0,"pop_back on empty StrBlob");
    data->pop_back();
}
/*
   std::string& StrBlob::front()
   {
   check(0,"front on empty StrBlob");
   return data->front();
   }


   std::string& StrBlob::back()
   {
   check(0,"back on empty StrBlob");
   return data->back();
   }
   */
std::string& StrBlob::front() const
{
    check(0,"front on empty StrBlob");
    return data->front();
}


std::string& StrBlob::back() const
{
    check(0,"back on empty StrBlob");
    return data->back();
}

StrBlobPtr StrBlob::begin(){return StrBlobPtr(*this);}
StrBlobPtr StrBlob::end(){return StrBlobPtr(*this, data->size());}





std::shared_ptr<std::vector<std::string>> StrBlobPtr::check(std::size_t i, const std::string& msg) const
{
    auto ret=wptr.lock();
    if(!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if(i>=ret->size())
        throw std::out_of_range(msg);
    return ret;
}

std::string& StrBlobPtr::deref() const
{
    auto p=check(curr,"drefernce past end");
    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr()
{
    check(curr,"increment passt end of StrBlobPtr");
    ++curr;
    return *this;
}






#endif
