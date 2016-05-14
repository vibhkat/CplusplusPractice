#include<iostream>
#include<string>
#include<memory>
int main()
{
std::string s; 
std::cin>>s;
int size=(int)s.size();
std::cout<<s<<" "<<size<<std::endl;
std::unique_ptr<char []> u (new char[size]);
for(size_t i=0; i!=size; ++i)
u[i]=s[i];

for(size_t i=0; i!=size; ++i)
std::cout<<u[i];
std::cout<<std::endl;

char* pc=new char[size];
for(size_t i=0; i!=size; ++i)
*(pc+i)=s[i];

for(size_t i=0; i!=size; ++i)
std::cout<<*(pc+i);
std::cout<<std::endl;
return 5;
}
