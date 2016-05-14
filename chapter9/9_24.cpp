#include<vector>
#include<iostream>
int main()
{
std::vector<double> c{1};
std::cout<<c.at(0)<<" "<<c.front()<<" "<<*c.begin()<<std::endl;
c.front()=10;
std::cout<<c[0]<<std::endl;

}
