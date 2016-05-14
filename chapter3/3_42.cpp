#include<vector>
#include<iostream>
#include<iterator>
int main()

{
std::vector<int>ivec{0,1,2,3,4,5};
int int_arr[ivec.size()];
for(size_t i=0;i<ivec.size();++i)
int_arr[i]=ivec[i];
for(size_t i=0;i<ivec.size();++i)
std::cout<<int_arr[i]<<" ";
std::cout<<std::endl;

return 0;


}
