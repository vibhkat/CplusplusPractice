#include<algorithm>
#include<iostream>
#include<vector>
#include<list>
#include<iterator>
int main()
{
std::vector<int> v{1,2,2,3,4,4,5,6,7,7};
std::list<int> l;
std::unique_copy(v.cbegin(),v.cend(), back_inserter(l));

for_each(l.begin(), l.end(), [](const int& i){std::cout<<i<<" ";});


}
