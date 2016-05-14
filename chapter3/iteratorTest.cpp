#include<iostream>
#include<cstring>
#include<cctype>
#include<vector>
int main()
{
    std::string s("some string");
    if(s.begin()!=s.end())
    {
        std::string::iterator it=s.begin();
    *it=toupper(*it);
    }
    std::cout<<s<<std::endl;
for(auto it=s.begin();it!=s.end()&&!isspace(*it);++it)
    *it=toupper(*it);

        std::cout<<s<<std::endl;
        std::string::size_type l =s.size();

std::vector<std::vector<int> > a(4,std::vector<int>(3,1));
for(std::vector<std::vector<int> >::iterator i=a.begin();i!=a.end();++i)
{
for(std::vector<int> ::iterator j=(*i).begin();j!=(*i).end();++j)
{
std::cout<<*j<<" ";
}
std::cout<<std::endl;
}

    return 0;
}
