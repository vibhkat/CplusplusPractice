#include<deque>
#include<iostream>
#include<string>
int main(int argc, char **argv)
{
std::string word;
std::deque<std::string> sq;
while(std::cin>>word)
{
	std::cout<<word<<std::endl;
sq.emplace_back(word);
}
std::cout<<"SIZE :" <<sq.size()<<std::endl;
for(std::deque<std::string>::iterator i=sq.begin(); i!=sq.end(); ++i)
{
std::cout<<*i<<std::endl;
}
return 6;
}
