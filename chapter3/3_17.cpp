#include<iostream>
#include<vector>
#include<cstring>
#include<cctype>
int main()
{
    std::string s;
    std::vector<std::string> v;
    while(std::cin>>s)
        v.push_back(s);
    for(std::string &s1:v)
    {
    for(char &c:s1)
        c=toupper(c);  
    }

    for(int i=0;i<8;++i)
        std::cout<<v[i]<<" ";
    std::cout<<std::endl;

return 0;
}
