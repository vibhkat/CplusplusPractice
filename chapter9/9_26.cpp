#include<vector>
#include<list>
#include<iostream>
int main(int argc, char **argv)
{
	std::vector<int> v;
	std::list<int> l;
int ia[]={0,1,1,2,3,5,8,13,21,55,89};
int size=0;
for(auto i:ia)
{
	v.emplace_back(i);
	l.emplace_back(i);
	std::cout<<i<<std::endl;
++size;
}
std::cout<<"SIZE :"<<size<<std::endl;
std::cout<<"VECTOR SIZE :"<<v.size()<<std::endl;
std::cout<<"LIST SIZE :"<<l.size()<<std::endl;


std::vector<int>::iterator iv=v.begin();
while(iv != v.end())
{
	if((*iv)%2 ==0)
	iv=v.erase(iv);
	else
	++iv;
	}
	
	
	
std::list<int>::iterator il=l.begin();
while(il != l.end())
{
	if((*il)%2 ==0)
	++il;
	else
	il=l.erase(il);
	}

for(int i:v)
std::cout<<i<<" ";
std::cout<<std::endl;


for(int i:l)
std::cout<<i<<" ";
std::cout<<std::endl;


return 2;
}
