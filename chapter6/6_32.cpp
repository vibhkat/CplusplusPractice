#include<iostream>
int &get(int *, int);
int main(int argc, char **argv)
{
int ia[10];
for(int i=0;i!=10;++i)
get(ia,i)=i;

for(int i=0;i!=10;++i)
std::cout<<ia[i]<<" ";
std::cout<<std::endl;
return 5;
}



int &get(int *array, int index)
{return array[index];}
