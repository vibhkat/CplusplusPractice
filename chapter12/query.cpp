#include"query.h"
void runQueries(std::ifstream& );
int main()
{
	std::ifstream infile("./text.txt");
	runQueries(infile);	
	}
	


void runQueries(std::ifstream& infile)
{
	TextQuery tq(infile);
	while(true)
	{
		std::cout<<"enter word to look for, or q to quit: ";
		std::string s;
		if(!(std::cin>>s) || s=="q") break;
		print (std::cout , tq.query(s))<<std::endl;
		}
	}
