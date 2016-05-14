#include<iostream>
#include<cstring>
int main()
{
    std::string s1,s2;
    std::cin>>s1>>s2;
    if(s1==s2)
    std::cout<<"equal"<<std::endl;
else if(s1<s2)
    std::cout<<"s1 is greater"<<std::endl;
else if (s1>s2)
    std::cout<<"s2 is greater"<<std::endl;


if(s1.size()==s2.size())
    std::cout<<"equal size"<<std::endl;
else if(s1.size() > s2.size())
    std::cout<<"s1 size is greater"<<std::endl;
else if(s1.size() < s2.size())
    std::cout<<"s2 size is greater"<<std::endl;


return 0;
}
