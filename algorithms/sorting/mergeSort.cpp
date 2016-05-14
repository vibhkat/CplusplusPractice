#include<vector>
#include<iostream>

int print(const std::vector<int> &);
std::vector<int> mergeSort( std::vector<int> );
std::vector<int> merge(std::vector<int> , std::vector<int>);



int main(int argc, char **argv)
{
    std::vector<int> v{38,27,43,3,9,82,10};
    print(v);
 v=mergeSort(v);
 print(v);
 
 
    return 3;
}




int print(const std::vector<int> &v)
{
    for(int i=0; i!=(int)v.size(); ++i)
    {
        std::cout<<v[i]<<" ";		
    }
    std::cout<<std::endl;
    return 4;
}


std::vector<int> mergeSort( std::vector<int> v)
{
    if(v.size()<=1)
    {
        return v;
    }
    std::vector<int> left, right, result;
    int middle=((int)v.size()+1)/2;
    for(int i=0; i!=middle; ++i)
    {
        left.push_back(v[i]);
    }
    for(int i=middle; i!=(int)v.size(); ++i)
    {
        right.push_back(v[i]);
    }	

    left=mergeSort(left);
    right=mergeSort(right);
    result=merge(left, right);
    return result;

}


std::vector<int> merge(std::vector<int> left, std::vector<int> right)
{
    std::vector<int> result;
    while((int)left.size() != 0 || (int)right.size() != 0)
    {
        if(left.size()>0 && right.size()>0)
        {
            if(left.front()<= right.front())
            {
                result.push_back(left.front());
                left.erase(left.begin());
            }
            else
            {
                result.push_back(right.front());
                right.erase(right.begin());
            }
        }
        else if((int)left.size()!=0)
        {
            for(int i=0; i!=(int)left.size(); ++i)
            {
                result.push_back(left[i]);
            }
            break; // break statement because the size of left vector is not changing wrt to what was happening in first if case, so we have to put a break statemet to get out of while loop
        }			
        else if((int)right.size()!=0)
        {
            for(int i=0; i!=(int)right.size(); ++i)
            {
                result.push_back(right[i]);
            }
        break;
        }	
        

    }

   return result;
}










