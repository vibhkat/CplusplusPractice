#include<iostream>
#include<stdexcept>
#include"Sales_item.h"
int main()
{
Sales_item item1,item2;
std::cin>>item1>>item2;
if(item1.isbn != item2.isbn)
throw std::runtime_error("Data must refer to same ISBN");
std::cout<<item1+item2<<std::endl;
for(int i=0;i!=10;++i)
{
	if(i==5)
	throw std::runtime_error("i equal to 5");
	std::cout<<i<<std::endl;
	
	
	
	}


    return 0;
}
