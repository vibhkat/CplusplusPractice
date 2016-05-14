#include<iostream>
#include<set>
#include<string>
#include<utility>
#include<map>
int main()
{
std::map<std::string,size_t> word_count;
std::string word;
while(std::cin>>word)
{
std::pair<std::map<std::string,size_t>::iterator,bool> it=word_count.insert({word,1});
if(!it.second)
{
	++((it.first)->second);
	}

}
 for(const std::pair<std::string, size_t>& w: word_count) 
    {
        std::cout<<w.first<<" occurs "<<w.second<< ((w.second > 1) ? " times" : " time")<<std::endl;	
    }
return 4;
}
