#include<iostream>
#include<vector>
int main()
{
	int a;
	std::vector<int> v;
	for(int i=0;i<10;++i)
	{
		std::cin>>a;
		v.push_back(a);
		}
	std::vector<int>::iterator begin=v.begin(),end=v.end();
	if(begin!=end)
	{
		for(std::vector<int>::iterator i=begin;i!=end;++i)
		*i=(*i)*(*i);		
		}
	for(int c:v)
	std::cout<<c<<std::endl;
	
	return 0;
	}
