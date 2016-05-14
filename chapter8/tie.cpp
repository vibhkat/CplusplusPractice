#include<iostream>
int main()
{
std::cin.tie(&std::cout);
std::ostream* old_tie= std::cin.tie(nullptr);
std::cin.tie(&std::cerr);
std::cin.tie(old_tie);
std::cerr<<"CERR";
std::cout<<"COUT";

}
