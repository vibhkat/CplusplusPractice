#include<vector>
#include<iostream>
std::vector<int>* vector();
int push_back(std::vector<int>* &);
std::ostream& print(std::vector<int>* &);

int main()
{
std::vector<int>* v=vector();
push_back(v);
print(v)<<std::endl;
delete v;
return 5;
}



std::vector<int>*  vector()
{
return new std::vector<int> ;
}


int push_back(std::vector<int>* & v)
{
	int i;
	while(std::cin>>i)
	{
		v->push_back(i);
		}
	
	return 6;
	}

std::ostream& print(std::vector<int>* & v)
{
	for(int i=0; i!= (int)v->size(); ++i)
	std::cout<<(*v)[i]<<" ";
	return std::cout;
	}
