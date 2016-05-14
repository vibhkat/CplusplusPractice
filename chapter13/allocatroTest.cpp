#include<iostream>
#include<memory>
int main()
{
std::allocator<std::string> alloc;
auto p=alloc.allocate(2);
(*p).reserve(2);
std::cout<<(*p).capacity()<<std::endl;
return 3;
}
