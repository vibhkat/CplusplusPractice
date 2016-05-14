#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>
int store(std::istream &, std::vector<std::string> &);

int main(int argc, char **argv)
{
std::string infile="./infile";
	std::vector<std::string> v;
std::fstream fstrm(infile, std::fstream::in);
if(fstrm.is_open())
{
	store(fstrm,v);
	}
else std::cerr<<"unable to open file"<<std::endl;


for(int i=0; i!=v.size(); ++i)
{
	std::istringstream ss(v[i]);
	std::string s;
	while(ss>>s){
std::cout<<s<<std::endl;
}
}
return 7;
}


int store(std::istream& is, std::vector<std::string>& v)
{
	std::string s;
	while(getline(is, s))
	{
		v.push_back(s);
		}
	
	return 5;
	}
