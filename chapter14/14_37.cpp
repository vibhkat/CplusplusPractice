#include<vector>
#include<iostream>
#include<algorithm>

class Equality{
public:
//Equality()=default;
bool operator()(int a, int b)
{
return (a<b)?true:false;
}
void operator()(int a){std::cout<<a<<std::endl;}

};






int main()
{
	Equality e;
	std::cout<<e(2,5)<<std::endl;
	std::vector<int> v={1,2,3,4,5,6,7,8,9};	
	std::for_each(v.begin(), v.end(), Equality());
return 2;
}
