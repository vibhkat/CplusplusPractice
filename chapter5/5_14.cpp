#include<iostream>
#include<string>
#include<vector>
int main()
{
	int count=1;
	std::string str, first, second;
	std::vector<std::string> v;
	for(std::string str1;std::cin>>str1; )
	{
		v.push_back(str1);
	}
	std::vector<std::string>::iterator itr=v.begin()+1;
	first=*(v.begin());
	while(itr != v.end())
	{
	second=*itr;
	if(first==second)
	{
	++count;
    }
    else 
    {
	std::cout<<first<<" occurred : "<<count<<std::endl;
	first=second;
	count=1;
    }
    
++itr;
}
std::cout<<first<<" occurred : "<<count<<std::endl;

	return 6;
	}
