#include<iostream>
#include<iterator>
int print(int **,int);
int main()
{
int a[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
for(int (*p)[4]=a;p!=a+3;++p)
{
	for(int* q=*p;q!=*p+4;++q)
	std::cout<<*q<<" ";
	std::cout<<std::endl;
	}
	print(a,4);
return 0;
}

int print(int (*matrix),int rowSize)
{
	for(int (*p)[4]=matrix;p!=matrix+3;++p)
{
	for(int* q=*p;q!=*p+4;++q)
	std::cout<<*q<<" ";
	std::cout<<std::endl;
	}
	
	return 7;
	
	
	}
