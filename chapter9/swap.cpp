#include<vector>
#include<list>
#include<iostream>
int main()
{
std::list<int> l={10,20,30,40,50};
std::vector<double> v1(l.begin(), l.end());
std::vector<int> v2={1,2,3,4};

std::vector<double> v3(v2.begin(), v2.end());
std::cout<<v1.size()<<std::endl;
std::vector<double>::iterator i=v1.begin();
std::cout<<*i<<std::endl;
v1.swap(v3);
std::cout<<*i<<std::endl;
std::cout<<v1.size()<<std::endl;
//std::swap(l,v2);// will not swap, different container type
v3.swap(v1);


}
