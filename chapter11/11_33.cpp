#include<map>
#include<iostream>
#include<string>
#include<utility>
#include<fstream>
#include<sstream>
#include<iterator>
std::map<std::string, std::string> buildMap(std::ifstream& );
const std::string& transform(const std::string& , const std::map<std::string, std::string>& );
void word_transform(std::ifstream& , std::istream& );



int main(int argc, char** argv)
{

    std::ifstream read("./transform.txt");
    word_transform(read,std::cin);


    return 5;
}




std::map<std::string, std::string> buildMap(std::ifstream& map_file)
{
    std::map<std::string, std::string> trans_map;
    std::string key, value;

    while(map_file>> key && (getline(map_file, value)))
    {
        if(value.size()>1)
        {
            trans_map[key]=value.substr(1);   //getline take space also, so to ignore the space we start from 1 i.e. 2nd postion
        }
        else 
            std::cout<<"no rule for"<<key<<std::endl;
    }
    return trans_map;
} 

const std::string& transform(const std::string& s, const std::map<std::string, std::string>& m)
{
   std::map<std::string, std::string>::const_iterator map_it=m.find(s);
    if(map_it!= m.cend())
        return map_it->second;
    else
        return s;
}

void word_transform(std::ifstream& map_file, std::istream& in)
{
    std::map<std::string, std::string> trans_map=buildMap(map_file);
    std::string text;
    while(getline(in,text))
            {
            std::istringstream stream(text);
            bool firstword=true;
            std::string word;
            while(stream>>word)
            {
            if(firstword)
            firstword=false;
            else
            std::cout<<" ";
            std::cout<<transform(word,trans_map);
            }
            }
            std::cout<<std::endl;
            }
