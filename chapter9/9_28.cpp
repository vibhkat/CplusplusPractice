#include<iostream>
#include<forward_list>
#include<string>
int main(int argc, char **argv)
{
std::forward_list<std::string> s={"quasi", "sambi", "frollo", "scar"};
std::string s1="sambi1", s2="here";
std::forward_list<std::string>::iterator prev=s.before_begin();
std::forward_list<std::string>::iterator curr=s.begin();
bool found=0;
while(curr != s.end())
{
	if(*curr == s1)
	{
		s.emplace_after(curr,s2);		
	found=1;
	break;
	}
	else
	{
		prev=curr;
    ++curr;	
	}	
}

if(!found)
s.emplace_after(prev,s2); //can not do emlace_after(s.end()-1,s2) because it is singly linked list and has no decrement operator function on iterators.

for(std::string i:s)
std::cout<<i<<" ";
std::cout<<std::endl;


return 5;
}
