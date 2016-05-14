#include<iostream>
int main()
{
int count=10;
auto f=[&count]()->int{return --count;};

while(count!= 0)
{
	f();
std::cout<<count<<std::endl;
}
std::cout<<"OUT"<<std::endl;

}
