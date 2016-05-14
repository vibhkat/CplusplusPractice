#ifndef QUERY_H
#define QUERY_H
#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<memory>
#include<utility>
#include<fstream>
#include<string>
#include<sstream>
#include<algorithm>
class QueryResult;
std::ostream& print(std::ostream& , const QueryResult&);

class TextQuery{
    friend class QueryResult;
    public:
    using line_no=std::vector<std::string>::size_type;
    TextQuery(std::ifstream&);
    QueryResult query(const std::string& );

    private:
    std::shared_ptr<std::vector<std::string> > file;
    std::map<std::string,std::shared_ptr<std::set<int>>> wm;
};


class QueryResult{
       friend std::ostream& print(std::ostream& , const QueryResult&);
    public:
    QueryResult(std::string s, std::shared_ptr<std::set<int>>p, std::shared_ptr<std::vector<std::string>>f):sought(s), lines(p), file(f){}
    std::set<int>::iterator begin() const{ return (*lines).begin();}
    std::set<int>::iterator end() const{return (*lines).end();}
    std::shared_ptr<std::vector<std::string>> getfile() const {return file;} 
    private:
    std::string sought;
    std::shared_ptr<std::set<int>> lines;
    std::shared_ptr<std::vector<std::string>>file;
};


TextQuery::TextQuery(std::ifstream& is):file(std::make_shared<std::vector<std::string>>())
{
    std::string text;
    while(getline(is,text))
    {
        file->push_back(text);
        int n=file->size()-1;   //check it after done
        std::string word;
        std::istringstream line(text);
        while(line>>word)
        {
            auto& lines=wm[word];
            if(!lines)
                lines.reset(new std::set<int>);
            lines->insert(n);
        }
    } 
}


QueryResult TextQuery::query(const std::string& sought) 
{
    static std::shared_ptr<std::set<int>> nodata(new std::set<int>);
    auto loc=wm.find(sought);
    if(loc==wm.end())
        return QueryResult(sought, nodata,file);
    else
        return QueryResult(sought,loc->second,file);

}

std::ostream& print(std::ostream& os, const QueryResult& qr)
{
    os<<qr.sought<<"occurs " <<qr.lines->size()<<" "<<"times"<<std::endl;
    for(auto num: *(qr.lines))
        os<<"\t(line "<<num+1<<")"<<*(qr.file->begin()+num)<<std::endl;
    return os;
}




#endif
