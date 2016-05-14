#include<iostream>
#include<vector>
int print(const std::vector<int> &);
void swap(std::vector<int>&,const int&, const int&);
int siftDown(std::vector<int>& a,  int ,int );
int heapSort(std::vector<int>& ,int );



int main()
{
    std::vector<int> v{38,27,43,3,9,82,10};
    print(v);
    std::cout<<std::endl;
    heapSort(v,(int)v.size());
    print(v);
    std::cout<<std::endl;
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


void swap(std::vector<int>& a,const int& first,const int& second)
{
    int temp=a[first];
    a[first]=a[second];
    a[second]=temp;

}

int siftDown(std::vector<int>& a,  int k,int N)
{
    while((2*k+1)<N)
    {
        int child=2*k+1;
        if((child+1<N) && (a[child]<a[child+1])) //if second child
        {
            child++;
        }

        if(a[k]<a[child])
        {
            swap(a,k, child);
            k=child;
        }
        else
        {
            return 5;
        }
    }
    return 2;
}



int heapSort(std::vector<int>& a, int N)
{
    for(int k=N/2; k>=0;--k)
    {
        siftDown(a,k,N);
    }

    while(N-1 > 0)
    {
        swap(a, 0, N-1);
        siftDown(a,0,N-1);
        --N;
    }
    return 5;
}










