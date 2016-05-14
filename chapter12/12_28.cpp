#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<memory>
#include<sstream>
#include<fstream>
#include<utility>
int read(std::ifstream&,std::shared_ptr<std::vector<std::string> >&, std::map<std::string,std::shared_ptr<std::set<int> > >&);
int searchAndPrint(const std::string&,const std::shared_ptr<std::vector<std::string> >&,const std::map<std::string,std::shared_ptr<std::set<int> > >&) ;
int main()
{
	std::ifstream infile("./text.txt");
	std::shared_ptr<std::vector<std::string> > file;
	std::map<std::string,std::shared_ptr<std::set<int> > > wm;
	read(infile,file,wm);
	while(true)
	   {
		std::cout<<"enter word to look for, or q to quit: ";
		std::string s;
		if(!(std::cin>>s) || s=="q") break;
		searchAndPrint(s,file,wm);
		}
		return 3;
}



int read(std::ifstream& in,std::shared_ptr<std::vector<std::string> >& file, std::map<std::string,std::shared_ptr<std::set<int> > >& wm)
{
	file=std::make_shared<std::vector<std::string> > ( );
	std::string text;
	while(getline(in,text))
	{
		file->push_back(text);
		int n=file->size();
		std::istringstream line(text);
		std::string word;
		while(line>>word)
		{
		//	std::cout<<word<<std::endl;
		auto& lines=wm[word];	
		if(!lines) lines.reset(new std::set<int>);
				lines->insert(n);
		}
	}
return 1;	
	}
	
	
	
	
int searchAndPrint(const std::string& sought,const std::shared_ptr<std::vector<std::string> >& file,const std::map<std::string,std::shared_ptr<std::set<int> > >& wm) 
{
	auto loc=wm.find(sought);
	if(loc==wm.end())
	std::cout<<"NOT FOUND"<<std::endl;
	else
	{
		//std::shared_ptr<std::set<int>> s=loc->second;
		std::cout<<sought<<" occurs :"<< (loc->second)->size()<<std::endl;
		for(auto i: *(loc->second))
		std::cout<<" (line "<< i<<" )"<< (*file)[i-1]<<std::endl;  // -1 fto start from 0
		
		}
	
	return 3;
	}
	
	
