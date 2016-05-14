#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item book,sum;
    if(std::cin>>sum)
    {
        while(std::cin>>book)
        {
            sum=sum+book;
        }
    }
    std::cout<<sum<<std::endl;
    return 0;
}
