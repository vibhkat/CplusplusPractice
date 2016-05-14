#include<iostream>
#include<vector>
int main()
{
	int count=0;
std::vector<int> v1{0,1,1,2},v2{0,1,1,2,3,5,8};
int end= (v1.size()>v2.size())? v2.size():v1.size();
for(int i=0;i<end;++i)
{
	if(v1[i]==v2[i])
	++count;
	}
	
	if(count==end)
	std::cout<<"IS a prefix"<<std::endl;
	else
	std::cout<<"not a prefix"<<std::endl;
	
return 9;
}
