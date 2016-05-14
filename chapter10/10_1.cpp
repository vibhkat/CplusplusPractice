#include<iostream>
#include<algorithm>
#include<vector>
int main(int argc, char**argv)
{
	std::vector<int> v{1,2,3,4,5,5,5};
	std::cout<<count(v.cbegin(), v.cend(), 2)<<std::endl;
	
	}
