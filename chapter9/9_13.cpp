#include<vector>
#include<list>
#include<iostream>
int main()
{
std::list<int> l={1,2,3,4,5};
//std::vector<double> v1=l; //this does not work
std::vector<double> v1(l.begin(), l.end());
std::vector<int> v2={1,2,3,4};

std::vector<double> v3(v2.begin(), v2.end());
std::cout<<v1.size()<<std::endl;
std::swap(v1,v3);
std::cout<<v1.size()<<std::endl;
//std::swap(l,v2);// will not swap, different container type
v3.swap(v1);


}
