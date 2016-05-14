#include<iostream>
#include<fstream>
#include"SalesDataClass.h"
int main(int argc , char **argv)
{
//Sales_data data;
//print(std::cout, data)<<std::endl;

//Sales_data data1("12345",3,10);
//print(std::cout, data1)<<std::endl;

//Sales_data data2(std::cin);
//print(std::cout, data2)<<std::endl;

//std::fstream read("infile",std::fstream::in);
//while(read)// read will go the end of file which is next to last character i.e. null , the the end passing null to object  and printing zero
//{
//Sales_data data3(read);
//print(std::cout, data3)<<std::endl;
//}


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

return 0;
}
