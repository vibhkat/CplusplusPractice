#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<utility>

int main(int argc, char** argv)
{
std::map<std::string,std::vector<std::pair<std::string,std::string> > > family; 
std::string last,children,DOB;
char ans='y';
while(ans=='y')
{
	std::cin>>last>>children>>DOB;
	(family[last]).emplace_back(children,DOB); 
std::cout<<"DO YOU WANT TO CONTINUE(y/n) :";
std::cin>>ans;
}

for(const std::pair<std::string,std::vector<std::pair<std::string,std::string> > >& w: family) 
    {
        
        for(const std::pair<std::string,std::string>& a: w.second)
        std::cout<<w.first<<" "<<a.first<<" "<<a.second<<std::endl;
    }

return 4;
}
