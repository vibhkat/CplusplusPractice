#include<iostream>
int main()
{
int *p=new int[10] {1,2,3,4,5};

for(int i=0; i!= 10; ++i)
std::cout<<*(p+i)<<std::endl;
int *p1=new int[0];
std::cout<<p1<<std::endl;
}
