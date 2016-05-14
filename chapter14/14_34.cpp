#include<iostream>
class abcd{
public:
int operator()(int a,int b, int c)
{
if(a) return b;
else return c;
}

};










int main()
{
	abcd a;
	std::cout<<a(1,1,2)<<std::endl;
	
return 4;
}
