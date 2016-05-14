#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
bool number(const std::string&);

int main()
{
std::vector<std::string> v{"Katiyar","my", "name","is", "Vibhanshu"};
for(const std::string& a:v)
std::cout<<a<<" ";
std::cout<<std::endl;


auto i=std::partition(v.begin(),v.end(), number);
for(const std::string& a:v)
std::cout<<a<<" ";
std::cout<<std::endl;

}

bool number(const std::string& s)
{
return (int)s.size()<=5;
}
