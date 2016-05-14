#ifndef GRAPH_H
#define GRAPH_H
#include<iostream>
#include<vector>
#include<queue>
class Graph{



    private:
        struct node{
            int n;
            node* next;
        };
        int v;
        node* adjList=NULL;

        void DFSUtil(const int& n, bool visited[]);
    public:
        Graph(const int&);
        Graph& addEdge(const int&, const int&);
        void printGraph();
        void DFS(const int &);
        void BFS(const int&);
};


Graph::Graph(const int& v)
{
    this->v=v;
    adjList=new node[v];   // it is same as making an arrayy of node and then assigning that array to adjList
    for(int i=0; i!=v; ++i)
    {
        adjList[i].n=i;
        adjList[i].next=NULL;
    }

}

Graph& Graph::addEdge(const int& src , const int& dest)
{
    node* temp1=new node;
    temp1->n=dest;
    temp1->next=NULL;
    node* head1=&adjList[src];
    while(head1->next!=NULL)
    {
        head1=head1->next;
    }
    head1->next=temp1;

    node* temp2=new node;   //in directed this part wont be there for destination because in directed the arrows are in one direction
    temp2->n=src;
    temp2->next=NULL;
    node* head2=&adjList[dest];
    while(head2->next!=NULL)
    {
        head2=head2->next;
    }
    head2->next=temp2;
    return *this;
}

void Graph::printGraph()
{
    for (int i =0 ; i!=v; ++i)
    {
        node* pCrawl = &adjList[i];
        std::cout<<"NODE : "<<pCrawl->n;
        while (pCrawl->next!=NULL)
        {
            pCrawl = pCrawl->next;
            std::cout<<"-> "<<pCrawl->n;
        }
        std::cout<<std::endl;
    }
}


void Graph::DFS(const int& n)
{
    bool *visited= new bool[v];
    for(int i=1;i!=v;++i)
        visited[i]=false;
    DFSUtil(n,visited);
}

void Graph::DFSUtil(const int& n, bool visited[])
{
    if(visited[n]==true) return;

    visited[n]=true;
    std::cout<<n<<" ";
    node* temp=&adjList[n];
    while(temp->next!=NULL)
    {
        temp=temp->next;
        DFSUtil(temp->n,visited);
    }
}

void Graph::BFS(const int& n)
{
    bool* visited=new bool[v];
    for(int i=0;i!=v;++i)
        visited[i]=false;
    std::queue<int> q;
    q.emplace(n);
    // visited[n]=true;
    while(!q.empty())
    {
        int s=q.front();
        if(!visited[s])
        {
            visited[s]=true;
            std::cout<<s<<" ";
        }
        q.pop();

        node* temp=&adjList[s];
        while(temp!=NULL)
        {
            if(!visited[temp->n])
            {
                q.push(temp->n);
            }
            temp=temp->next;
        }
    }
}



#endif
