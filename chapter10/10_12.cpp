#include"SalesDataClass.h"
#include<iostream>
#include<algorithm>
#include<vector>

int main()
{

std::vector<Sales_data> v;
char ans='y';
while(ans=='y')
{
	Sales_data s(std::cin);
v.emplace_back(s);
std::cout<<"DO YOU WANT TO CONTINUE(y/n) : ";
std::cin>>ans;
}

for(const Sales_data& a:v)
{
	print(std::cout, a)<<std::endl;
	}


std::cout<<"-------------------"<<std::endl;
sort(v.begin(), v.end(), compareIsbn);
for(const Sales_data& a:v)
{
	print(std::cout, a)<<std::endl;
	}

}
