#include<string>
#include<iostream>
#include<iostream>
int screen(int ht=10 ,int wd =20);

int main()
{
screen(2,3);
screen(1,10);
screen(1);

return 0;
}
inline int screen(int ht, int wd)
{
	std::cout<<"ht :"<<ht<<" wd : "<<wd<<std::endl;
	
	return 4;
	}
