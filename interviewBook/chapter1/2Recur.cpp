#include<iostream>
#include<string>
void reverse(char* str);

int main(int argc, char** argv)
{
char c[]="ABCDEF";
//std::cout<<c[6]<<std::endl;
reverse(c);
return 3;
}

void reverse(char* str)
{
	
if(*str== NULL) return;
	reverse(str+1);

std::cout<<*str<<std::endl;
}
