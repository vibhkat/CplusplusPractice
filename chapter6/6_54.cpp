#include<iostream>
#include<vector>
int abcd(const int &, const int &);
int sum(const int &, const int &);
int diff(const int &, const int &);
int multiply(const int &, const int &);
int divide(const int &, const int &);
int main()
{
using PF=int (*) (const int & , const int &);
std::vector<PF> v;
std::vector<int (*) (const int & , const int &)> V;
//int (*p) (const int & , const int &)=sum;
//v.push_back(p);
v.push_back(sum);
v.push_back(diff);
v.push_back(multiply);
v.push_back(divide);

std::cout<<(v[0])(2,3)<<std::endl;

for( PF &s:v)
std::cout<<s(10,2)<<std::endl;

for(std::vector<PF>::iterator i=v.begin(); i!=v.end(); ++i)
{
	std::cout<<(*i)(10,2)<<std::endl;
	
	}

return 5;
}


int sum(const int &a, const int &b)
{return (a+b) ; }

int diff(const int &a, const int &b)
{return (a-b); }

int multiply(const int &a, const int &b)
{return (a*b); }

int divide(const int &a, const int &b)
{return (a/b); }
