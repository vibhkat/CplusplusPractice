#ifndef STRING_H
#define STRING_H
#include<memory>
#include<iostream>
#include<utility>
class String{
    public:
        String():elements(nullptr),first_free(nullptr), cap(nullptr){}
        ~String();
        String(char c[]):elements(nullptr),first_free(nullptr), cap(nullptr){while(*c){push_back(*c); ++c;}  std::cout<<"IN C STYLE CONSTRUCTOR"<<std::endl; }
        String(const String&);
        String& operator=(const String&);
	String(String&&) noexcept;
	String& operator=(String&&) noexcept;
        size_t size() const{return first_free-elements;}
        size_t capacity() const{return cap-elements;}
        char* begin() const {return elements;}
        char* end() const {return first_free;}
        void push_back(const char&);

    private:
        static std::allocator<char> alloc;
        char* elements;
        char* first_free;
        char* cap;
        void chk_n_alloc(){if (size()==capacity()) reallocate(); }
        void reallocate();
        void free();
        std::pair<char*, char*> alloc_n_copy(const char*, const char*);
};

std::allocator<char> String::alloc;

String::String(String&& s)noexcept:elements(s.elements),first_free(s.first_free),cap(s.cap)
{
s.elements=s.first_free=s.cap=nullptr;
std::cout<<"MOVE CONSTRUCTOR "<<std::endl;
}

String& String::operator=(String&& rhs) noexcept
{
if (this!= &rhs)
{
free();
elements=rhs.elements;
first_free=rhs.first_free;
cap=rhs.cap;
rhs.elements=rhs.first_free=rhs.cap=nullptr;
}
std::cout<<"MOVE ASSIGNMENT OPERATOR"<<std::endl;
return *this;
}


String& String::operator=(const String& rhs)
{
    auto data= alloc_n_copy(rhs.begin(),rhs.end());
    free();
    elements=data.first;
    first_free=cap=data.second;
    std::cout<<"IN COPY ASSIGNMENT OPERATOR"<<std::endl;
    return *this;
}


String::String(const String& s)
{
    auto newdata=alloc_n_copy(s.begin(),s.end());
    elements=newdata.first;
    first_free=cap=newdata.second;
    std::cout<<"IN COPY CONSTRUCTOR"<<std::endl;
}

std::pair<char*, char* > String::alloc_n_copy(const char* b, const char* e)
{
    auto data=alloc.allocate(e-b);
    return {data, std::uninitialized_copy(b,e,data)};
}


String::~String()
{
    free();
}

void String::reallocate()
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


void String::free()
{
    if(elements)
    {
        for(auto p=first_free; p!=elements;)
            alloc.destroy(--p);
        alloc.deallocate(elements, cap-elements);
    }
}


void String::push_back(const char& s)
{
    chk_n_alloc();
    alloc.construct(first_free++,s);
}
#endif
