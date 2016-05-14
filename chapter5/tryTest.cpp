#include<iostream>
#include<stdexcept>
int main()
{
for(int i=0;i!=10;++i)
{
try{
	if(i==5)
	throw std::runtime_error("i equal to 5");
	std::cout<<i<<std::endl;
}
catch(std::runtime_error err)
{
	std::cout<<err.what()<<"\nTry Again? Enter y or n"<<std::endl;
	char c;
	std::cin>>c;
	if(!std::cin || c=='n')
	break;
	}
	
	
	}


    return 0;
}
