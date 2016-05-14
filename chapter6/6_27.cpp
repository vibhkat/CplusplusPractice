#include<iostream>
int sum(std::initializer_list<int> );

int main(int argc, char *argv[])
{
	std::cout<<sum({1,2,3,4,5,6,7})<<std::endl;
	
	return 8;
	}
 int sum(std::initializer_list<int> a)
 {
	 int s=0;
	 for(int i:a)
	 s+=i;
	 
	 
	 return s;
	 }
