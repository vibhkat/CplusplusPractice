#include"String.h"
#include<vector>

int main()
{
	std::vector<String> c;
	c.push_back("asdsadf");
	String s1="abcd";
	String s2=std::move(s1);
	s1="sdasad";
	String s3;
	s1=s2;
	
	//std::cout<<c[0]<<std::endl; //will not work becuase we have not defined the output operator for String class
	return 5;
	}


/* RESUTLS
IN C STYLE CONSTRUCTOR
MOVE CONSTRUCTOR 
IN C STYLE CONSTRUCTOR
MOVE CONSTRUCTOR 
IN C STYLE CONSTRUCTOR
MOVE ASSIGNMENT OPERATOR
IN COPY ASSIGNMENT OPERATOR


* 
* 
* We can see that compiler itstead of using copy-contol members, it is using move members
*/
