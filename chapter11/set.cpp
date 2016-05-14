#include<iostream>
#include<vector>
#include<set>
#include<string>
int main()
{
std::set<std::string> exclude={"The", "But", "And"};
for(const std::string& a: exclude)
std::cout<<a<<" ";
std::cout<<std::endl;

}
