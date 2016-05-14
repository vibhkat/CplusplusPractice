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
    if(v.begin()!=v.end())
    {
    for(std::vector<int>::iterator i=v.begin();i!=(v.end()-1);++i)
    { 
        std::cout<<(*i)+*(i+1)<<" ";
    }
    std::cout<<std::endl;
    int j=v.size()/2;
    std::vector<int>::iterator begin=v.begin(),end=v.end();
    if(v.size()%2==0)
    {
        for(int i=0;i<j;++i)
        {
            std::cout<<*(begin+i)+*(end-i-1)<<" ";
        }
        std::cout<<std::endl;
    }   
    else
    {
        for(int i=0;i<j;++i)
        {    
            std::cout<<*(begin+i)+*(end-i-1)<<" "; 
        }
        std::cout<<*(begin+(end-begin)/2)<<std::endl;
    }
}



    return 0;
}
