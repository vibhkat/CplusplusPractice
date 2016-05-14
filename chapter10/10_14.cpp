#include<iostream>
int main(int argc, char **argv)
{
int (*f)(const int& ,const int& )=[](const int& a,const int& b)-> int{return a+b; };
std::cout<<f(2,3)<<std::endl;
std::cout<<f(20,30)<<std::endl;
}
