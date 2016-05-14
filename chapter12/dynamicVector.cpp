#include<iostream>
#include<vector>
#include<memory>
int main()
{
 std::vector<int>* v=new std::vector<int>;
 (*v).push_back(1);
 (*v).push_back(10);
s std::cout<<(*v)[1]<<std::endl;


}
