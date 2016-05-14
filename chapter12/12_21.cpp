#include<memory>
#include<iostream>
#include<string>
int main()
{
std::allocator<std::string> alloc;
auto const p=alloc.allocate(3);
std::string s;
auto q=p;
while(std::cin>>s && q!=p+3)
{
	alloc.construct(q++,s);
	}

return 5;
}
