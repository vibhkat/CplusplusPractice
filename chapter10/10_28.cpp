#include<algorithm>
#include<iostream>
#include<vector>
#include<list>
#include<iterator>
int main()
{
std::vector<int> v{1,2,3,4,5,6,7,8,9}, v1,v2,v3;

copy(v.cbegin(),v.cend(), back_inserter(v1));
//copy(v.cbegin(),v.cend(), front_inserter(v2));
copy(v.cbegin(),v.cend(), inserter(v3,v3.begin()));
for_each(v1.begin(), v1.end(), [](const int& i){std::cout<<i<<" ";});
std::cout<<std::endl;

for_each(v3.begin(), v3.end(), [](const int& i){std::cout<<i<<" ";});
std::cout<<std::endl;
}
