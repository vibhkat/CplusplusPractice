#include<iostream>
#include<stdexcept>
#include<exception>
int main()
{
int a ,b;
while(std::cin>>a>>b)
{
	try
	{if(b==0)
throw std::runtime_error("number should be more than zero") ;
		std::cout<<double(a)/b<<std::endl;
		}catch(std::runtime_error err)
		{
			std::cout<<err.what()<<"\nTry again? Enter y or n"<<std::endl;
			char c;
			std::cin>>c;
			if(!std::cin || c=='n')
			break;			
			}
}
return 6;
}
