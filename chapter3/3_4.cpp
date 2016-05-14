#include<iostream>
#include<cstring>
#include<string>
char* fool();
int main()
{
    //std::string s,s1,S;
//while(std::cin>>s1)
//{
//s+=s1;
//S=S+" "+s1;
//}
//std::cout<<s<<std::endl;
//std::cout<<S<<std::endl;


int arr[5][2]={1,2,3,4,5,6,7,8,9,10};
std::cout<<*(*(arr+1)+1)<<std::endl;

std::cout<<fool()<<std::endl;

return 0;
}



char* fool()
{
	return "Hello World";}
