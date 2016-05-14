#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>

bool count(const std::string& , const std::string::size_type& );

int main(int argc, char **argv)
{
std::vector<std::string> v{"i", "am", "vibhnashu"};
std::string::size_type sz=6;
auto countBind=std::bind(count,std::placeholders::_1,sz);
std::cout<<count_if(v.begin(), v.end(),countBind)<<std::endl; 


return 5;
}



bool count(const std::string& s, const std::string::size_type& sz)
{
return s.size()>sz; 
}
