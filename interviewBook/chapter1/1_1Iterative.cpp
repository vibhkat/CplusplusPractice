#include<iostream>
#include<string>
int main(int argc, char* argv[])
{
std::string a("ABCCDEF");
for(int i=0; i!=(int)a.size()-1; ++i)
{
for(int j=i+1; j!=(int)a.size(); ++j)
{
if(a[i]==a[j])
{
std::cerr<<"NOT UNIQUE"<<std::endl;
return 4;
}
}
}
std::cout<<"UNIQUE"<<std::endl;
return 5;
}
