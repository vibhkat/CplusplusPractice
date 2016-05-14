#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item item1,item2;

        int count1=1;
    if( std::cin>>item1)
    {


        while(std::cin>>item2)
        {
            if(item1.isbn == item2.isbn)
            {
                ++count1;
            }
            else
            {
                std::cout<<item1.isbn<< " : "<<count1<<std::endl;
                count1=1;
                item1=item2;
            }
        }
        std::cout<<item1.isbn<<" : "<<count1<<std::endl;
    }
    
        return 0;
    }
