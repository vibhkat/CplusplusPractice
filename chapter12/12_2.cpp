#include"strBlob.h"
#include"test.h"

int main()
{
	const StrBlob s1 ={"I ", "am", "VIbhnashu"};  //implicit conversion means this is implicitly converted to StrBlob by using its constructor and then copying it.
    StrBlob s2={"asd"};
	s2=s1;
	std::cout<<s2.size()<<std::endl;
	s2.push_back("KATIYAR");
	std::cout<<s2.size()<<std::endl;
	s1.push_back("uy");
	std::cout<<s2.size()<<std::endl;
	std::cout<<s1.size()<<std::endl;
	s1.pop_back();
	s2.pop_back();
		std::cout<<s2.size()<<std::endl;
		std::cout<<s1.front()<<" "<<s2.front()<<std::endl;
std::cout<<s1.back()<<" "<<s2.back()<<std::endl;

	}
