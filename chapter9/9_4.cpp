#include<vector>
#include<iostream>
bool search(const std::vector<int>::iterator& ,const  std::vector<int>::iterator& , const int& );


int main(int argc, char**argv)
{
std::vector<int> a{1,2,3,4,5};
int b=2;

std::cout<<search(a.begin(), a.end(), b)<<std::endl;
return 3;
}


bool search(const std::vector<int>::iterator& begin,const  std::vector<int>::iterator& end, const int& a)
{ 
	bool bo=false;
	for(std::vector<int>::iterator i=begin; i!=end; ++i)
	{
		if((*i) == a)   return true	;
}	
	return bo;
	} 
