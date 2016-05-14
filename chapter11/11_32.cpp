#include<map>
#include<string>
#include<iostream>
#include<utility>
#include<set>
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

std::multimap<std::string,std::string>::iterator i=authors.begin();
while(i!=authors.end())
{
	std::string search_item=i->first;
	auto pos=authors.equal_range(search_item);
std::set<std::string> s;
for(;pos.first!=pos.second; ++pos.first)
s.insert(pos.first->second);

std::cout<<search_item<<" : ";
for(const std::string& a:s)
std::cout<<a<<" ";
std::cout<<std::endl;

i=pos.second;
	}

}
