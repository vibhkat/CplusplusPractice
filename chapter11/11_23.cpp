#include<iostream>
#include<vector>
#include<map>
#include<string>

int main(int argc, char** argv)
{
std::multimap<std::string,std::vector<std::string> > family; 
std::string last,children;
char ans='y';
while(ans=='y')
{
	std::cin>>last>>children;
	family.insert({last,{children}}); 
std::cout<<"DO YOU WANT TO CONTINUE(y/n) :";
std::cin>>ans;
}

for(const std::pair<std::string, std::vector<std::string> >& w: family) 
    {
        std::cout<<w.first<<" ";
        for(const std::string& a: w.second)
        std::cout<<a<<" ";
        std::cout<<std::endl;	
    }
    
    //for(size_t i=0; i!= (family["katiyar"]).size(); ++i)
    //{
		//std::cout<<family["katiyar"][i]<<" ";
	//}
        //std::cout<<std::endl;	
  

return 4;
}
