#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
int main()
{
std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
std::list<int> l(v.rbegin()+(10-7),v.rbegin()+(10-3+1));// add +1 to include the last element because of left inclusive property and right exclusice property while copying

for(const int& i:l)
std::cout<<i<<std::endl;


}
