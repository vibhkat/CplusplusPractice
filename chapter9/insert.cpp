#include<iostream>
#include<vector>
int main()
{
std::vector<int> a{1,2,3,4,5};
auto j=a.begin();
std::cout<<"................."<<*j<<std::endl;
auto i=a.insert(a.begin()+1, {20, 10});

std::cout<<*i<<std::endl;
std::cout<<*(i+1)<<std::endl;
std::cout<<*(i-1)<<std::endl;
std::cout<<"................."<<*(j+1)<<std::endl;
}
