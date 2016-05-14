#include<iostream>
#include"file_1.h"
int i=4;
int reused=42;
int main()
{
std::string book("book");
std::cout<<book<<std::endl;
int unique=0;
std::cout<<reused<<" "<<unique<<std::endl;
int reused=0;
std::cout<<reused<<" "<<unique<<std::endl;
std::cout<<::reused<<" "<<unique<<std::endl;                                                                                                                             
int i=100;
int j=i;
std::cout<<"j ="<<j<<std::endl;
int ival=42;
int *p=&ival;
int **p1=&p;
std::cout<<"address :"<<p<<" value: "<<*p<<std::endl;
std::cout<<p1<<" "<<*p1<<" "<<**p1<<std::endl;
std::cout<<buffSize<<std::endl;

return 0;
}
