#include<iostream>
#include<sstream>
int main()
{
std::string s;
getline(std::cin, s);
std::istringstream record(s);
double f;
while(record>>f)
std::cout<<f+1<<std::endl;


}
