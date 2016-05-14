#include<iostream>
int swap(int *, int* );
int main()
{
int i,j;
std::cin>>i>>j;
swap(&i, &j);	
	std::cout<<i<<" "<<j<<std::endl;
	
	return 5;
	}


int swap(int *p, int*q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=* temp;	
	return 4;
	}
