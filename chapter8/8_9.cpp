#include<iostream>
#include<sstream>
std::istream& read(std::istream& is);

int main(int argc, char **argv)
{std::string line;
	getline(std::cin,line);
	std::istringstream ss(line);
	read(ss);
	return 7;
	}


std::istream& read(std::istream& is)
{
	std::string s;
	while(is>>s)
	{
		std::cout<<s<<std::endl;
		}
	std::cout<<std::endl;
	
	return is;
	}


