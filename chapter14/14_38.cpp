#include<algorithm>
#include<string>
#include<iostream>
#include<fstream>
class SizeComp{
public:
SizeComp(size_t n1,size_t n2):sz1(n1),sz2(n2){}
bool operator()(const std::string& s)
{
if (s.size()>=sz1  && s.size()<=sz2)
return true;
else 
return false;
}

private:
size_t sz1,sz2;

};



int main()
{
	
	std::ifstream in("./infile");
std::string s;
SizeComp sc(1,10);
size_t count=0;
while(in>>s)
{
	if(sc(s)) ++count;
	}
std::cout<<count<<std::endl;
	
	
return 3;
}
