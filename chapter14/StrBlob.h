#ifndef STRBLOB_H
#define STRBLOB_H
#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<initializer_list>
#include<stdexcept>
class StrBlobPtr;

#include"StrBlobPtr.h"
class StrBlob{
    friend class StrBlobPtr;
    public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> );
    size_type size() const {return data->size();}
    bool empty() const{return data->empty();}
    void push_back(const std::string& t) const   {data->push_back(t);}
    void pop_back() const;
    std::string& front() const ;
    std::string& back() const ;
    //StrBlobPtr begin(){return StrBlobPtr(*this);}
    //StrBlobPtr end(){    return StrBlobPtr(*this, data->size());}  
    private:
    std::shared_ptr<std::vector<std::string> > data;
    void check(size_type , const std::string& ) const ;


};

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




#endif
