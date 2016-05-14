#include<iostream>
#include"Sales_data.h"
int main(int argc , char **argv)
{
    Sales_data data1, data2;
    if(read(std::cin,data1))
    {
        while(read(std::cin, data2))
        {
            if(data1.isbn() == data2.isbn())
            {
                data1.combine(data2);

            }
            else
            {
				print(std::cout, data1)<<std::endl;
                data1=data2;
            }
            
        }
				print(std::cout, data1)<<std::endl;
    
    }
    else
    {
        std::cerr<<"No Data?!" <<std::endl;
    
    }

    return 7;
}
