#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
int main(int argc, char **argv)
{
std::vector<std::string> v{"i", "am", "vibhnashu"};
std::string::size_type sz=6;
std::cout<<count_if(v.begin(), v.end(),[sz](const std::string& s)->bool {return s.size()>sz; })<<std::endl; 


return 5;
}
