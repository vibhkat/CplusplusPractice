#include<memory>
#include<iostream>
#include<utility>
#include<string>
#include<initializer_list>
#include<algorithm>

class StrVec{
    public:
        StrVec():elements(nullptr),first_free(nullptr), cap(nullptr){}
        StrVec(std::initializer_list<std::string> );
        StrVec(const StrVec&);
        StrVec& operator=(const StrVec&);
        ~StrVec();
        size_t size() const{return first_free-elements;}
        size_t capacity() const{return cap-elements;}
        std::string* begin() const {return elements;}
        std::string* end() const {return first_free;}
        void reserve(size_t n);
        void resize(const size_t n=0,const std::string& s=std::string() );
     
        void push_back(const std::string&);
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

StrVec::StrVec(std::initializer_list<std::string> l):elements(nullptr),first_free(nullptr), cap(nullptr)
{
	for(auto beg=l.begin(); beg!=l.end(); ++beg)
	push_back(*beg);
	}

void StrVec::resize(const size_t n,const std::string& s) 
{
	auto newcapacity =n;
    auto newdata= alloc.allocate(newcapacity);
    auto dest=newdata;
    auto elem=elements;
    for(size_t i=0; i!=n;++i)
    {
		if(i<size())
        alloc.construct(dest++,*elem++);
        else 
        alloc.construct(dest++,s);       
 
    }
    free();
    elements=newdata;
    first_free=dest;
    cap=elements+newcapacity;
	
	}


void StrVec::reserve(size_t n)
{
	if(capacity()<n)
	reallocate();
	}


std::allocator<std::string> StrVec::alloc;

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
    free();
    elements=newdata;
    first_free=dest;
    cap=elements+newcapacity;
}


void StrVec::free()
{
    if(elements)
    {
        for_each(elements,first_free,[](std::string* p){alloc.destroy(p);});
            
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

StrVec& StrVec::operator=(const StrVec& rhs)
{
    auto data= alloc_n_copy(rhs.begin(),rhs.end());
    free();
    elements=data.first;
    first_free=cap=data.second;
    return *this;
}


int main()
{}



