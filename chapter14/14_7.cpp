#include"String.h"

int main()
{
	String s="abcd";
	String s1("my Name is ");
	std::cout<<s1<<std::endl;
	
	if(s==s1) std::cout<<"YES"<<std::endl;
	else if(s!=s1) std::cout<<"NO"<<std::endl;
	 String a("abcD"), b("abcd");
	 if(b<a) std::cout<<"LESS"<<std::endl;
	 else std::cout<<" GREATER"<<std::endl;
	 
	 std::cout<<s[3]<<" "<<s1[4]<<std::endl;
	
	std::string s5[]={"one", "two"};
	std::string* p=&s5[0];
	std::cout<<p<<" "<<s5[1]<<std::endl;
	
	}
