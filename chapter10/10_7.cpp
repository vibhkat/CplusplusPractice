#include<list>
#include<vector>
#include<iostream>
#include<iterator>
int main()
{
std::vector<int> vec; std::list<int> lst{1,2,3,4,5}; int i;
//while(std::cin>>i);
//lst.push_back(i);
copy(lst.begin(), lst.end(), back_inserter(vec));

for(int a:vec)
std::cout<<a<<" ";
std::cout<<std::endl;
}
