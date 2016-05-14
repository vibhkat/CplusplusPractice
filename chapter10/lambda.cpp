#include<iostream>
int main()
{
auto f=[]()->int{return 42;};
std::cout<<f()<<std::endl;
}
