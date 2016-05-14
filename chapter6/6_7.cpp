#include<iostream>
int count();

int main()
{
for(int i=0;i!=10;++i)
{
	std::cout<<count()<<std::endl;
		}	
	std::cout<<ctr<<std::endl; //error: ‘ctr’ was not declared in this scope

	return 5;
	}


int count()
{
	int static ctr=0;
	return ctr++;
	}
