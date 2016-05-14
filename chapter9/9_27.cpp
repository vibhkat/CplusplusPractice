#include<iostream>
#include<forward_list>
int main(int argc, char **argv)
{
std::forward_list<int> f={0,1,2,3,4,5,6,7,8,9};
std::forward_list<int>::iterator prev=f.before_begin();
std::forward_list<int>::iterator curr=f.begin();
while(curr != f.end())
{
if((*curr)%2)
{
curr=f.erase_after(prev);
}
else
{
prev=curr;
++curr;
}
}
for(int i:f)
std::cout<<i<<" ";
std::cout<<std::endl;
return 9;

}
