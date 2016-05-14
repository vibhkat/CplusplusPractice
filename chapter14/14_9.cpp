#include"Sales_data.h"
#include<iostream>
int main()
{
	Sales_data s;
	std::cin>>s;
	std::cout<<s<<std::endl;
	int a=2,b=3;
	std::cout<<((a<b)? "a":"b")<<std::endl;
	std::string st="asdasda";
	Sales_data s1;
	s1=st;
	std::cout<<s1<<std::endl;
	}
