#include<iostream>
#include<map>
#include<string>
bool compare(const std::string& , const std::string& );

int main(int argc, char **argv)
{
    std::map<std::string, size_t> word_count;
    std::string word;
    while(std::cin>>word)
    {
        std::string s;
        bool found =false;
        for(const std::pair<std::string, size_t>& w: word_count) 
        {
            if(compare(word,w.first)) 
            { 
                s=w.first;
                found=true;  
                break;
            }			
        }
        if(found) 		++word_count[s];
        else 		++word_count[word];	
    }


    for(const std::pair<std::string, size_t>& w: word_count) 
    {
        std::cout<<w.first<<" occurs "<<w.second<< ((w.second > 1) ? " times" : " time")<<std::endl;	
    }
    //std::cout<<word_count["although"]<<std::endl;

    std::cout<<compare("Example,","example")<<std::endl;
}



bool compare(const std::string& a, const std::string& b)
{
    int count=0;
    if(a.size() == b.size())
    {
        for(int i=0; i!=(int)a.size(); ++i)
        {
            if(toupper(a[i])== toupper(b[i]))
                ++count;
        }
        if (count ==(int)a.size()) return true;
        else return false;		
    }
    else if((a.size()- b.size() == 1) && ispunct(a[a.size()-1]))
    {
        return compare(std::string(a.begin(),a.end()-1),b);
    }
    return false;	
}

