#include<memory>
#include<iostream>
#include<string>
int main()
{
std::allocator<std::string> alloc;
std::string* const p=alloc.allocate(3);
std::string s;
std::string* q=p;
while(std::cin>>s && q!=p+3)
{
	alloc.construct(q++,s);
	}
auto r=p;
while(r!=q)
{
	std::cout<<*(r++)<<std::endl;
	}


while(q!=p)
alloc.destroy(--q);
 
alloc.deallocate(p,3);

return 5;
}
