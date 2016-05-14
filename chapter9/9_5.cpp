#include<vector>
#include<iostream>
std::vector<int>::iterator& search( const std::vector<int>::iterator& ,  const  std::vector<int>::iterator& , const int& );


int main(int argc, char**argv)
{
std::vector<int> a{1,2,3,4,5};
int b=21;
std::vector<int>::iterator p=search(a.begin(), a.end(), b);

if(p>=a.begin() && p<a.cend())
std::cout<<"found"<<std::endl;
else
std::cout<<"not found"<<std::endl;

std::vector<int>::const_iterator c=a.begin();
//(*c)=12;
return 3;
}


std::vector<int>::iterator& search(  const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end, const int& a)
{ 
	static std::vector<int>::iterator p;
	for(static std::vector<int>::iterator i=begin; i!=end; ++i)
	{
		if((*i) == a)  
		{
			return i;
		}
}	
	return p;
	} 
