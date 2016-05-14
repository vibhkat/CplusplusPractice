#include<iostream>
#include<cctype>
#include<string>
int main()
{
    std::string s,result;
    std::cin>>s;
    for(auto c:s)
    {
    if(!ispunct(c))
        result+=c;
    }
    std::cout<<result<<std::endl;
    return 0;
}
