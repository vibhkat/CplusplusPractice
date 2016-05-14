#include<iostream>
int print(const int);
int print(const int *);
int main()
{
	int i =0, j[2]={0,1};
	print(i);
	print(j);
	
	return 9;
	}
	
	
	int print(const int i)
	{
		std::cout<<i<<std::endl;
		return 5;
		}
		
		int print(const int i[])
		{
		for(int j=0;j!=2;++j)
		std::cout<<i[j]<<std::endl;
		return 2;		
		}
