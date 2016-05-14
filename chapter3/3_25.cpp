#include<vector>
#include<iostream>
int main()
{
	std::vector<int> scores(11,0);
	std::vector<int>::iterator begin=scores.begin();
	int grade;
	while(std::cin>>grade)
	{
		int j=grade/10;
		++*(begin+j);
		
		}
		
		for(int i=0;i<scores.size();++i)
		std::cout<<scores[i]<<" ";
		std::cout<<std::endl;
		
	return 10;
	}
