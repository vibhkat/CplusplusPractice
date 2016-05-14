#include<iostream>
std::istream& read(std::istream& is);





int main(int argc, char **argv)
{
	
	read(std::cin);
	return 7;
	}


std::istream& read(std::istream& is)
{
	std::string s;
	while(is>>s)
	{
		std::cout<<s<<" ";
		}
	std::cout<<std::endl;
	
	return is;
	}


