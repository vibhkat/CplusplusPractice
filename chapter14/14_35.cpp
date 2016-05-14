#include<iostream>
#include<string>
#include<vector>

class ReadString{
	public:
std::string operator()(std::istream& is)
{
std::string s;
if(is>>s) return s;
else return std::string();
}

};



int main()
{
	ReadString r;
	std::cout<<r(std::cin)<<std::endl; 
	
	std::vector<std::string> v;
	v.push_back(r(std::cin));
	v.push_back(r(std::cin));	
	std::cout<<v[0]<<" "<<v[1]<<std::endl;
return 0;
}
