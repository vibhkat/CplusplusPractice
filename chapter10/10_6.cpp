#include<algorithm>
#include<vector>
#include<iostream>
#include<iterator>
int main()
{
std::vector<int> v;
fill_n(back_inserter(v),10,1);

for(int a:v)
std::cout<<a<<" ";
std::cout<<std::endl;
}
