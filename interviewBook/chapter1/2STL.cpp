#include<iostream>
#include<string>
int main()
{
char c[]="ABCDEF";
char* end=std::end(c)-1;// writing minus one just to avoid null character in the array
while( end!=std::begin(c))
{
std::cout<<*(end-1)<<std::endl;
--end;
}
return 4;
}
