#include<string>
#include<iostream>
#include<vector>
int main()
{
	int count=1;
	std::vector<std::string> s;	
	std::string str;
	while(std::cin>>str && !str.empty())
	s.push_back(str);	
	
	for(std::vector<std::string>::iterator i=s.begin();i!=s.end()-1;++i)
	{
		if(*i == *(i+1) && isupper((*i)[0]))
		{
		std::cout<<*i<<" occured twice"<<std::endl;
		break;	
			}
		else
		++count;
		
		}
	if(count==s.size())
	std::cout<<"no word was repeated"<<std::endl;
	
	
	
	return 2;
	}
