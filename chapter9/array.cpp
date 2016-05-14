#include<array>
#include<iostream>

int main(int argc, char **argv)
{
std::array<int,10> a={10,11,12,};
//std::array<int,10>b(a.begin(),a.end());   //this does not work
std::array<int,10>b=a;
std::cout<<a[4]<<std::endl;
std::cout<<a[0]<<std::endl;
//a={3};
std::cout<<a[0]<<std::endl;
std::array<int,10> a3={0};
a3={0};

std::array<int,10>::iterator i=a.begin();
std::cout<<*i<<"---------------"<<std::endl;
std::swap(a,a3);
std::cout<<*i<<";;;;;;;;;;;;;;;;;"<<std::endl;
std::array<std::array<int,10>,3> d;
return 5;
}
