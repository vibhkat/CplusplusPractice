#include<iostream>
#include"Sales_data.h"
int main()
{
    Sales_data data1,data2;
    double price=0;
    std::cin>> data1.bookNo>> data1.units_sold>> price;

    data1.revenue=data1.units_sold * price;
    std::cin>> data2.bookNo>> data2.units_sold>> price;                             
    data2.revenue=data2.units_sold * price;

    if(data1.bookNo == data2.bookNo)
    {
        std::cout<<data1.bookNo<<" "<<data1.units_sold+data2.units_sold<<" "<<data1.revenue+data2.revenue<<" ";
        if(data1.units_sold+data2.units_sold !=0)
            std::cout<<(data1.revenue+data2.revenue)/(data1.units_sold+data2.units_sold)<<std::endl;
        else
            std::cout<<"(no sales)"<<std::endl;
        return 10;
    }
    else
    {
        std::cerr<<"Data must refer to same ISBN"<<std::endl;
        return -1;
    }
}
