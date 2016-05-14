#include<vector>
#include<iostream>
int main()
{
std::vector<int> a{1,2,3,4,5,6};
for(int &i:a)
{
	i=((i%2)!=0 )? 2*i:i;
	}
for(int i:a)
std::cout<<i<<" ";
std::cout<<std::endl;

return 1;
}
