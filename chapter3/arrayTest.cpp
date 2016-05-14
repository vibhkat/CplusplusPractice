#include<iostream>
#include<iterator>
int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int *e=&arr[10];
	for(int *b=arr;b<e;++b)
	std::cout<<*b<<" ";
	std::cout<<std::endl;
	int *beg=std::begin(arr), *last=std::end(arr);
	for(int *i=beg;i<last;++i)
	std::cout<<*i<<" ";
	std::cout<<std::endl<<last-beg<<std::endl;;
	
	return 0;
		}
