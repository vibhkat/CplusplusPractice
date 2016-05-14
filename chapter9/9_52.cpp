#include<iostream>
#include<string>
#include<stack>

bool balanced (std::string);

int main()
{
std::string s;
std::cin>>s;
std::cout<<s<<std::endl;
std::cout<<balanced(s)<<std::endl;
return 3;
}


bool balanced( std::string s)
{
	std::stack<std::string> stk;
	for(int i=0; i!=(int)s.size(); ++i)
	{
		if(s[i]=='{' || s[i]=='(' ||s[i]=='[')
		{
				 std::string s2{s[i]};
		//  std::cout<<s2<<" ";
		 stk.emplace(s2);
		//std::cout<<stk.top()<<std::endl;
		}
		else if(s[i]=='}' || s[i]==')' ||s[i]==']')
		{
		if(stk.empty())
			{
			return false;
			}
		else 
		   {
			std::string s1{stk.top()};
				if((s1=="{" && s[i]=='}' )  || (s1=="(" && s[i]==')') || (s1=="[" && s[i]==']') )
		        {
				stk.pop();
			    }
		   }
		}
	}

if(stk.empty()) return true;
else return false;	
}
