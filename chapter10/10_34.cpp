#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>

int main()
{
std::vector<int> v{1,2,3,4,5,6,0,7};
for_each(v.rbegin(), v.rend(), [](const int& i){std::cout<<i<<std::endl;});
for (auto i=v.end()-1; i>=v.begin(); --i)
std::cout<<*i<<std::endl;
auto it=std::find(v.rbegin(), v.rend(), 0);
std::cout<<*it<<std::endl;

}
