#include<iostream>
#include<string>
int main(int argc, char *argv[])
{
	std::string str;
	for(int i=0;i!=argc;++i)
{
	
	std::string s=argv[i];
	str+=s;
	std::cout<<s<<" ";	
	}
	
	std::cout<<std::endl<<str<<std::endl;
	
	
	
	return 5;}
