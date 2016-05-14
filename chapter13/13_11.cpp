#include<iostream>
#include<string>

class HasPtr{
public:
HasPtr(const std::string& s=std::string()):ps(new std::string(s)),i(0){}
HasPtr(const HasPtr& orig):ps(new std::string(*orig.ps)),i(orig.i){}
HasPtr& operator=(const HasPtr&);
~HasPtr(){}
private:
std::string* ps;
int i;

};

HasPtr& HasPtr::operator =(const HasPtr& rhs)
{
	ps=new std::string(*rhs.ps);
	i=rhs.i;
	return *this;
	}




int main()
{
int x;
std::cout<<x<<std::endl;	
	
	}
