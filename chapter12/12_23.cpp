#include<iostream>
#include<string>
#include<memory>
int main()
{
std::string s1,s2,s;
std::cin>>s1>>s2;
s=s1+s2;
std::cout<<s<<std::endl;

int size=(int)s.size();
std::unique_ptr<char[]> u(new char[size]);

for(size_t i=0; i!=size; ++i)
u[i]=s[i];

for(size_t i=0; i!=size; ++i)
std::cout<<u[i];
std::cout<<std::endl;
}
