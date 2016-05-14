#include<iostream>
#include<algorithm>
#include<list>
#include<string>
int main(int argc, char**argv)
{
	std::list<std::string> l{"1","2","3","4","5","5","5"};
	std::cout<<count(l.cbegin(), l.cend(), "5")<<std::endl;
	
	}
