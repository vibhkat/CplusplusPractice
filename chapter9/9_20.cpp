#include<list>
#include<deque>
#include<iostream>
int main(int argc, char** argv)
{
std::list<int> l{1,2,3,4,5,6,7,8};
std::deque<int> d1, d2;
for(std::list<int>::iterator i=l.begin(); i!=l.end(); ++i)
{
if((*i)%2 == 0)
d1.emplace_back(*i);
else
d2.emplace_back(*i);
}

std::cout<<d1.size()<<" "<<d2.size()<<std::endl;



return 6 ;
}
