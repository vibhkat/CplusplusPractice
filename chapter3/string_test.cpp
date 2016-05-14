#include<iostream>
#include<cctype>
#include<string>
int main()
{
 std::string s1(10,'c');
    std::cout<<s1<<std::endl;
for(auto &c: s1)
{
    std::cout<<c<<std::endl;
c=toupper(c);
}
std::cout<<s1<<std::endl;

    return 0;
}
