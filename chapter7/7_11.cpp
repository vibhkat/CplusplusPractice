#include<iostream>
#include<fstream>
#include"Sales_data.h"
int main(int argc , char **argv)
{
Sales_data data;
print(std::cout, data)<<std::endl;

Sales_data data1("12345",3,10);
print(std::cout, data1)<<std::endl;

Sales_data data2(std::cin);
print(std::cout, data2)<<std::endl;

std::fstream read("infile",std::fstream::in);
while(read)// read will go the end of file which is next to last character i.e. null , the the end passing null to object  and printing zero
{
Sales_data data3(read);
print(std::cout, data3)<<std::endl;
}

return 0;
}
