#include<iostream>
#include<vector>
int print(const std::vector<std::vector<double> > & p);

int main()
{
int a=5,i=0;
(++i)=a;

std::cout<<i<<std::endl;

std::vector<std::vector<double> > b(3,std::vector<double>());
std::cout<<"SIze: "<<b.size() <<std::endl;
std::cout<<" column :"<<(b.at(0)).size()<<std::endl;
//(b[0]).push_back(std::vector<double> {1,2,3});// wrong

b[0]=std::vector<double> {17,18,19};
b[2]=std::vector<double> {7,8,9};
//b[0]={1,12,3};

//b[0]=(3,4); //wrong;
//b[0]=2; //wrong;
std::vector<double> temp {10,12};
print(b);
b[1]=temp;
print(b);

std::cout<<" column :"<<(b.at(0)).size()<<std::endl;
//std::cout<<b[2][1]<<std::endl;
b[2]=temp;
print(b);

//std::cout<<b[2][1]<<std::endl;
}



int print(const std::vector<std::vector<double> > & p)
{
	for(int i=0; i<(p.size());++i)
	{
		for(int j=0; j<((p[i]).size());++j)
			std::cout<<p[i][j]<<" ";
		std::cout<<";"<<std::endl;
	}
	return 3;
}
