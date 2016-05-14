#include<iostream>
#include<vector>
int main()
{
    int ii;
    std::vector<int> v;
    while(std::cin>>ii)
    {
        v.push_back(ii);
    }
    for(int i=0;i<v.size();++i)
    { 
        std::cout<<v[i]+v[i+1]<<" ";
    }
    std::cout<<std::endl;
    int j=v.size()/2;
    if(v.size()%2==0)
    {
        for(int i=0;i<j;++i)
        {
            std::cout<<v[i]+v[v.size()-i-1]<<" ";
        }
        std::cout<<std::endl;
    }   
    else
    {
        for(int i=0;i<j;++i)
        {    
            std::cout<<v[i]+v[v.size()-i-1]<<" "; 
        }
        std::cout<<v[j]<<std::endl;
    }




    return 0;
}
