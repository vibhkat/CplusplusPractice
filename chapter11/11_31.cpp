#include<map>
#include<string>
#include<iostream>
#include<utility>
int main()
{
std::multimap<std::string, std::string> authors;
std::string name,book;
while(std::cin>>name>>book)
{
authors.insert({name,book});
}

for(const std::pair<std::string, std::string>& a: authors)
std::cout<<a.first<<" "<<a.second<<std::endl;

std::string search_item="lohn";
auto pos=authors.equal_range(search_item);
authors.erase(pos.first,pos.second);

for(const std::pair<std::string, std::string>& a: authors)
std::cout<<a.first<<" "<<a.second<<std::endl;
}
