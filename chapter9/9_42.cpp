#include<string>
#include<iostream>
int main()
{
std::string s;
s.reserve(100);

std::cout<<s.capacity()<<std::endl;

}
