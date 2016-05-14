#include<iostream>
#include"Sales_data.h"
int main(int argc , char **argv)
{
   
    if(std::cin)
    {
		Sales_data data1 (std::cin);
        while(std::cin)
        {
			Sales_data data2(std::cin);
			//print(std::cout, data2)<<std::endl;
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
		//		print(std::cout, data1)<<std::endl;
    
    }
    else
    {
       std::cerr<<"No Data?!" <<std::endl;
    }
Sales_data e;
print(std::cout, e)<<std::endl;

    return 7;
}
