#include<vector>
#include<iostream>
#include<iterator>
int main()



{
    std::vector<std::vector<int> > a;
    std::vector<int> b{1,2,3};
    std::vector<int> c(10);
    //std::vector<int>::size_type;
//std::vector<int>d=10;
    
    
    std::vector<std::vector<int> > a1(10,std::vector<int>(2,1));
    for(std::vector<int> i:a1)
    {
    for(int j:i)
    std::cout<<j<<" ";
    std::cout<<std::endl;
}

int int_arr[]={0,1,2,3,4,5};
std::vector<int>ivec(std::begin(int_arr),std::end(int_arr));
for(std::vector<int>::iterator i=ivec.begin();i!=ivec.end();++i)
std::cout<<*i<<" ";
std::cout<<std::endl;



return 0;}



