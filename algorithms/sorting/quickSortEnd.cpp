#include<vector>
#include<iostream>
int print(const std::vector<int> &);
int QuickSort(std::vector<int>& ,  const int& ,  const int& );
int partition(std::vector<int>& , const int&,  const int&);
void swap(std::vector<int>&,const int&, const int&);

int main()
{
    std::vector<int> v{38,27,43,3,9,82,10};
    //std::vector<int> v{1,2,3,4,5,6};
    print(v);
    std::cout<<std::endl;
    QuickSort(v,0,((int)v.size()-1));
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


int QuickSort(std::vector<int>& a,const int&Start, const int& End)
{
	//print(a);
	//std::cout<<std::endl;
    if(Start<End)
    {
        int partitionIndex=partition(a,Start, End);
        
        QuickSort(a,Start, partitionIndex-1);
        QuickSort(a, partitionIndex+1, End);		
    }
    return 5;
}


int partition(std::vector<int>& a,const int& start,const int&end)
{
    int pivot=a[end];
    int partitionIndex=start;
    for(int i=start; i<end; ++i)
    {
        if(a[i]<=pivot)
        {
            swap(a,i,partitionIndex);
            ++partitionIndex;
        }
    }	 	
    swap(a,partitionIndex, end);

    return partitionIndex;
}

void swap(std::vector<int>& a,const int& first,const int& second)
{
    int temp=a[first];
    a[first]=a[second];
    a[second]=temp;

}
