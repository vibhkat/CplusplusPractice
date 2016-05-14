#include<iostream>
#include"StrBlob.h"
#include"StrBlobPtr.h"
int main()
{
	StrBlob a1={"hi","bye","now"};
	StrBlobPtr p(a1);
	*p="okay";
	std::cout<<p->size()<<std::endl;
	std::cout<<(*p).size()<<std::endl;
	
	}
