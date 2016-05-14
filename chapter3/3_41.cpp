#include<vector>
#include<iostream>
#include<iterator>
int main()

{
int int_arr[]={0,1,2,3,4,5};
std::vector<int>ivec(std::begin(int_arr),std::end(int_arr));
for(std::vector<int>::iterator i=ivec.begin();i!=ivec.end();++i)
std::cout<<*i<<" ";
std::cout<<std::endl;

return 0;


}
