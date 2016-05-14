#include<iostream>
#include<utility>
#include<set>
#include<string>
int main(int argc, char* argv[])
{
std::string s1("ABCDEeF   fdsfasdfs");
std::string s2("ABCDEeF ");
std::multiset<char> m1(s1.begin(),s1.end());
std::multiset<char> m2(s2.begin(),s2.end());
if(m1==m2) std::cout<<"permutation"<<std::endl;
else std::cout<<"not permutation"<<std::endl;

return 4;
}
