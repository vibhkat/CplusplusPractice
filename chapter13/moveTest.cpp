#include<iostream>
#include<utility>
int main()
{
int &&rr1=42;
int &&rr3=std::move(rr1);
std::cout<<rr3<<" "<<rr1<<std::endl;

}
