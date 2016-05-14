#include<iostream>
int main()
{
char ch;
int count=0;
std::cin>>ch;
switch(ch)
{
case 'a': case 'b':
++count;
break;
default:
;
}
std::cout<<count<<std::endl;
return 8;
}
