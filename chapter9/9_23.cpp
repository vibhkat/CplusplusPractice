#include<deque>
#include<iostream>
int main()
{
std::deque<int> c{1};
if(!c.empty())
{
auto val=*c.begin(), val2=c.front();
auto last=c.end();
auto val3=*(--last);
auto val4=c.back();

std::cout<<val<<" "<<val2<<" "<<val3<<" "<<val4<<std::endl;
*(c.begin())=2;
std::cout<<c.at(0)<<std::endl;
}

}
