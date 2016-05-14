#include<iostream>
#include<vector>
struct X{
X(){std::cout<<"X"<<std::endl;}
X(const X&){std::cout<<"const X&"<<std::endl;}
X& operator=(const X&){std::cout<<"COPY ASSIGNMENT"<<std::endl;return *this;}
~X(){std::cout<<"DESTRUCTOR"<<std::endl;}

};

void func(X);
void funcRef(X&);
void funcPtr(X*);
X ret(X);


int main()
{
	X a,b;  //constructor to initialize and destructor when out of scope 2 times
	X c=a; //copy constructor and destructor when out of scope
	a=b; //copy assignment opearator is called
	X* pt=&a; // nothing because it shoud non refernce type
	func(a); //copy constructor because non refernce type and destructor when function ends
	funcRef(a); // nothing because non refernce type
	funcPtr(pt);  // nothing because non refernce type
	std::vector<X> v();
	X* p=new X;      //constructor to initialize the value because when we use new allocation and intitaliztion take palce at the same time
	delete p;  // destructor of X will be called to delete the dynamic memory
std::cout<<"--------------------"<<std::endl;
X e=ret(a); //2 copy constructor and one destructor
std::cout<<"--------------------"<<std::endl;
X f;     //constructor
f=ret(a);   //2 copy constructor and the copy assignment and then 2 destructor one to destroy the temp X and other one to destroy the returned object from function
std::cout<<"--------------------"<<std::endl;
//at the end 5 destructors to destroy a,b,c,e,f
	}


void func(X a)
{}

void funcRef(X& a){}
void funcPtr(X* a){}
X ret(X a){return a;}
