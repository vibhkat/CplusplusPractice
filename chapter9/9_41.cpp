#include<vector>
#include<iostream>
#include<string>
int main()
{
std::vector<char> c {'h','e','l','l','o'};

std::string s(c.begin(), c.end());
std::cout<<s<<std::endl;

}
