#include<iostream>
#include<string>
#include"Person.h"



int main(int argc, char *argv[])
{
Person p1;
read(std::cin, p1);
print(std::cout,p1)<<std::endl;

Person p2(std::cin);
print(std::cout,p2)<<std::endl;


return 6;
}
