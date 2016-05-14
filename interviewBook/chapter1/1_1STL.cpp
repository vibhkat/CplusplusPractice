#include<iostream>
#include<set>
#include<utility>
#include<string>
int main()
{
std::string s=("ABCDEFA");
std::set<char> set;
bool unique=1;
for(int i=0; i!=(int)s.size(); ++i)
{
std::pair<std::set<char>::iterator,bool> ret=set.insert(s[i]);
if(ret.second==0)
{
	unique=0;
break;
}
}
if(unique) std::cout<<"UNIQUE"<<std::endl;
else std::cout<<"NOT UNIQUE"<<std::endl;

return 0;
}
