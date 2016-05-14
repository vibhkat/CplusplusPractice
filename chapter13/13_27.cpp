#include<iostream>
#include<string>
class HasPtr{
	friend void print(const HasPtr&);
    public:
        HasPtr(const std::string& s=std::string()):ps(new std::string (s)),i(0),use(new std::size_t (1)){}
        HasPtr(const HasPtr& orig):ps(orig.ps),i(orig.i),use(orig.use){++*use;}
        HasPtr& operator=(const HasPtr& );
        ~HasPtr();
    private:
        std::string* ps;
        int i;
        std::size_t* use;
};
HasPtr::~HasPtr()
{
	if(--*use==0)
	{
		delete ps;
		delete use;
		}
	}

HasPtr& HasPtr::operator =(const HasPtr& rhs)
{
	++*rhs.use;
	if(--*use==0)  //decrrementing and checking whether 
	{
		delete ps;
		delete use;
	}
    ps=rhs.ps;
    i=rhs.i;
    use=rhs.use;
    return *this;	
}

void print(const HasPtr& p)
{
std::cout<<*p.ps<<" "<<p.i<<" "<<*p.use<<std::endl;
	}





int main()
{
	HasPtr a("adasdsadas"),b;
	print(a);
	print(b);
	b=a;
	print(a);
	print(b);
	}
