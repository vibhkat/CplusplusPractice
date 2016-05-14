#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H
#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<initializer_list>
#include<stdexcept>
//class StrBlob;
#include"StrBlob.h"

class StrBlobPtr{
    friend class StrBlob;
    public:
    StrBlobPtr():curr(0){}
   // StrBlobPtr(StrBlob& a, size_t sz=0):wptr(a.data),curr(sz){ }
    std::string& deref() const;
    StrBlobPtr& incr();
StrBlobPtr& operator++();
StrBlobPtr& operator--();
StrBlobPtr& operator++(int);
StrBlobPtr& operator--(int);
std::string& operator*() const;
std::string* operator->() const;
    private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t , const std::string&) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;


};


std::string& StrBlobPtr::operator*() const
{
auto p=check(curr,"dereference past end");
return (*p)[curr];

}


std::string* StrBlobPtr::operator->() const
{
return & this->operator*();
}

StrBlobPtr& StrBlobPtr::operator++(int)
{
StrBlobPtr ret=*this;
++*this;
return ret;
}


StrBlobPtr& StrBlobPtr::operator--(int)
{
StrBlobPtr ret=*this;
--*this;
return ret;
}

StrBlobPtr& StrBlobPtr::operator++()
{
check(curr,"increment past end of StrBlobPtr");
++curr;
return *this;
}


StrBlobPtr& StrBlobPtr::operator--()
{
--curr;
check(curr,"increment past end of StrBlobPtr");
return *this;
}


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
