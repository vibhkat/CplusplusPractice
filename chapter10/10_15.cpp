#include<iostream>
int main(int argc, char **argv)
{
int a=2;
auto f=[a](const int& b)-> int{return a+b; };
std::cout<<f(3)<<std::endl;
std::cout<<f(30)<<std::endl;
}
