#include<iostream>
#include<string>
class HasPtr{
	friend void swap(HasPtr&, HasPtr&);
	friend void print(const HasPtr&);
    public:
        HasPtr(const std::string& s=std::string()):ps(new std::string (s)),i(0){}
        HasPtr(const HasPtr& orig):ps(new std::string (*(orig.ps))),i(orig.i){}
        HasPtr& operator=(const HasPtr& );
        ~HasPtr(){delete ps;}
    private:
        std::string* ps;
        int i;
};

HasPtr& HasPtr::operator =(const HasPtr& rhs)
{
    auto newp=new std::string(*rhs.ps);
    delete ps;
    ps=newp;
    i=rhs.i;
    return *this;	
}

inline void swap(HasPtr& lhs, HasPtr& rhs)
{
	using std::swap;
	swap(lhs.ps,rhs.ps);
	swap(lhs.i,rhs.i);
	std::cout<<"SWAPING CALLEED------------------------------"<<std::endl;
	}


void print(const HasPtr& p)
{
	std::cout<<*p.ps<<" "<<p.i<<std::endl;
	}





int main()
{
	HasPtr a("I"),b("AM");
	print(a);
	print(b);
	swap(a,b);
	print(a);
	print(b);
	}
