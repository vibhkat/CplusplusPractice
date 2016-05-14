#include<iostream>
#include"../chapter2/Sales_data.h"
int main(int argc , char **argv)
{
    Sales_data data1, data2;
    double price=0;
    if(std::cin>> data1.bookNo>> data1.units_sold>>price)
    {
        data1.revenue=data1.units_sold * price;
        while(std::cin>> data2.bookNo>> data2.units_sold>> price)
        {
            data2.revenue=data2.units_sold * price;
            if(data1.bookNo == data2.bookNo)
            {
                data1.revenue+=data2.revenue;	
                data1.units_sold+=data2.units_sold;

            }
            else
            {
                std::cout<<data1.bookNo<<" "<<data1.units_sold<<" "<<data1.revenue<<" "<<data1.revenue/data1.units_sold<<std::endl;  
                data1=data2;
            }
            
        }
        std::cout<<data1.bookNo<<" "<<data1.units_sold<<" "<<data1.revenue<<" "<<data1.revenue/data1.units_sold<<std::endl;
    
    }
    else
    {
        std::cerr<<"No Data?!" <<std::endl;
    
    }

    return 7;
}
