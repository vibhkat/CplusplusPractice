#include<string>
#include<algorithm>
#include<iostream>
int main()
{
std::vector<std::string> s {"the","quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
sort(s.begin(), s.end());
for(std::string a:s)
std::cout<<a<<" ";
std::cout<<std::endl;

std::vector<std::string>::iterator end_unique=unique(s.begin(), s.end());
for(std::string a:s)
std::cout<<a<<" ";
std::cout<<std::endl;

s.erase(end_unique, s.end());
for(std::string a:s)
std::cout<<a<<" ";
std::cout<<std::endl;

}
