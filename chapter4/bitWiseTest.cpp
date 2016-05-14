#include<iostream>
#include<bitset>
int main()

{
	int a[]={1,2,3,4};
unsigned char bits=0227;
std::cout<<(~bits)<<std::endl;
std::cout<<sizeof(a)<<std::endl;
int x[10];
int *p=x;
std::cout<<sizeof(x)<<" "<<sizeof(*x)<<std::endl;
std::cout<<sizeof(x)/sizeof(*x)<<std::endl;
std::cout<<sizeof(p)<<" "<<sizeof(*p)<<std::endl;
std::cout<<sizeof(p)/sizeof(*p)<<std::endl;
return 10;
}
