#include<vector>
#include<numeric>
#include<iostream>

int main(int argc, char **argv)
{
std::vector<int> v{1,2,3,4,5};
std::cout<<accumulate(v.cbegin(), v.cend(), 0.0)<<std::endl;


}
