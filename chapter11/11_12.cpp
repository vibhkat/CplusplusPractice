#include<vector>
#include<utility>
#include<iostream>
#include<string>
int main()
{
std::vector<std::pair<std::string, int> > v;
std::string s;
int i;
while(std::cin>>s>>i)
{
//v.emplace_back(s,i);                                    //1st way
//v.emplace_back(make_pair(s,i));                          // 2nd way
v.emplace_back(std::pair<std::string, int> (s,i));                  //3rd way


}

for(const std::pair<std::string, int>& a: v)
std::cout<<a.first<<" "<<a.second<<std::endl;
}
