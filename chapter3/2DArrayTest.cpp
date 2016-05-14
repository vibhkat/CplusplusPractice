#include<iostream>
#include<iterator>
int main()
{
int a[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
for(int (*p)[4]=a;p!=a+3;++p)
{
	for(int* q=*p;q!=*p+4;++q)
	std::cout<<*q<<" ";
	std::cout<<std::endl;
	}
return 0;
}
