#include<iostream>
#include<cstring>
#include<string>
int main()
{
	char c1[]="My name ",c2[]="is Vibhnashu";// writing this way by default null character is added automatically therefore therefore there will be +1 elmentsin each array
	char *beg1=std::begin(c1),*end1=std::end(c1),*beg2=std::begin(c2),*end2=std::end(c2);
	int size1=end1-beg1-1,size2=end2-beg2-1; // -1 to not include the null character or we can use strlen()
	std::cout<<size1<<" "<<size2<<std::endl;
	char c3[size1+size2];
	strcpy(c3,c1);strcat(c3,c2);
	
	for(int i=0;i<(size1+size2);++i)
	std::cout<<c3[i];
	std::cout<<std::endl;
	std::string s(c1);
	s+=c2;
	std::cout<<s<<std::endl;
	return 0;
	}
