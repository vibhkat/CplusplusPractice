#ifndef STRVEC_H
#define STRVEC_H
#include<memory>
#include<iostream>
#include<utility>
#include<string>

class StrVec{
    public:
        StrVec():elements(nullptr),first_free(nullptr), cap(nullptr){}
        StrVec(const StrVec&);
        StrVec& operator=(const StrVec&);
        StrVec(StrVec&&) noexcept;
 	StrVec& operator=(StrVec&&) noexcept;
        ~StrVec();
        size_t size() const{return first_free-elements;}
        size_t capacity() const{return cap-elements;}
        std::string* begin() const {return elements;}
        std::string* end() const {return first_free;}
        void push_back(const std::string&);
	void push_back(std::string&&);
    friend bool operator==(const StrVec&, const StrVec&);
    friend bool operator!=(const StrVec&, const StrVec&);
    private:
        static std::allocator<std::string> alloc;
        std::string* elements;
        std::string* first_free;
        std::string* cap;
        void chk_n_alloc(){if (size()==capacity()) reallocate(); }
        void reallocate();
        void free();
        std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
};

std::allocator<std::string> StrVec::alloc;

StrVec::StrVec(StrVec&& s) noexcept:elements(s.elements),first_free(s.first_free),cap(s.cap)
{
s.elements=s.first_free=s.cap=nullptr;
}

StrVec& StrVec::operator=(StrVec&& rhs) noexcept
{
if (this!= &rhs)
{
free();
elements=rhs.elements;
first_free=rhs.first_free;
cap=rhs.cap;
rhs.elements=rhs.first_free=rhs.cap=nullptr;
}
return *this;
}



StrVec::StrVec(const StrVec& s)
{
    auto newdata=alloc_n_copy(s.begin(),s.end());
    elements=newdata.first;
    first_free=cap=newdata.second;
}

StrVec::~StrVec()
{
    free();
}

void StrVec::reallocate()
{
    auto newcapacity =size()? 2*size():1;
    auto newdata= alloc.allocate(newcapacity);
    auto dest=newdata;
    auto elem=elements;
    for(size_t i=0; i!=size();++i)
    {
        alloc.construct(dest++,std::move(*elem++));
    }
    free(); //destroying the old memory
    elements=newdata;
    first_free=dest;
    cap=elements+newcapacity;
}


void StrVec::free()
{
    if(elements)
    {
        for(auto p=first_free; p!=elements;)
            alloc.destroy(--p);
        alloc.deallocate(elements, cap-elements);
    }
}


std::pair<std::string*, std::string* > StrVec::alloc_n_copy(const std::string* b, const std::string* e)
{
    auto data=alloc.allocate(e-b);
    return {data, std::uninitialized_copy(b,e,data)};
}

void StrVec::push_back(const std::string& s)
{
    chk_n_alloc();
    alloc.construct(first_free++,s);
}

void StrVec::push_back(std::string&& s)
{
chk_n_alloc();
alloc.construct(first_free++,std::move(s));s
}




StrVec& StrVec::operator=(const StrVec& rhs)
{
    auto data= alloc_n_copy(rhs.begin(),rhs.end());
    free();
    elements=data.first;
    first_free=cap=data.second;
    return *this;
}

inline bool operator==(const StrVec& lhs, const StrVec& rhs)
{
if(lhs.size()==rhs.size())
{
for(size_t i=0; i!=lhs.size(); ++i)
{
if(*(lhs.begin()+i) != *(rhs.begin()+i))
return false;
}
return true;
}
else 
return false;
}

inline bool operator!=(const StrVec& lhs, const StrVec& rhs)
{
return !(lhs==rhs);
}
#endif
