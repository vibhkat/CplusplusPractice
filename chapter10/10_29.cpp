#include<iterator>
#include<vector>
#include<iostream>
#include<string>
int main()
{

std::istream_iterator<std::string> i(std::cin), eof;
std::vector<std::string> v(i,eof);

for(const std::string& a:v)
std::cout<<a<<" ";
std::cout<<std::endl;


}
