#include<algorithm>
#include<iostream>
#include<vector>
#include<list>
#include<iterator>
int main()
{
std::istream_iterator<int> i(std::cin),eof;
std::vector<int> v(i,eof);
std::sort(v.begin(),v.end());

std::ostream_iterator<int> o(std::cout," ");
copy(v.begin(), v.end(),o);
//o=std::endl; will not wrok because it will only print int type.
std::cout<<std::endl; 
}
