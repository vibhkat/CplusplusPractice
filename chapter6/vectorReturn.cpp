#include<iostream>
#include<vector>
std::vector<std::string> value();
int main( int argc, char **argv)
{
std::vector<std::string> value(),a;
a=value();
for(std::string s:a)
std::cout<<s<<" ";
std::cout<<std::endl;


//return 6;
}



std::vector<std::string> value()
{
return {"my","name","is","Vibhanshu"};



}
