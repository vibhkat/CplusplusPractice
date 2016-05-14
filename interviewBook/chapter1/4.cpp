#include<iostream>
#include<string>
int main()
{
std::string s("Mr  John Smith    "), s1;
bool space=0;
int end;
for(int i=(int)s.size()-1;i>=0;--i) //trying to find the end string and then we can start adding char and given character in place of space to new string
{
	if(isalpha(s[i]))
	{
		end=i;
		break;
		}
	}
for(int i=0; i<=end; ++i)
{
if(isalpha(s[i]) )
{
s1+=s[i];
if (space==1) space=0;
}
else if (isspace(s[i]) && space==0) 
{
s1+="%20";
space=1;
}
}
std::cout<<s1<<std::endl;

std::cout<<(int)('a')<<std::endl;

return 3;



}
