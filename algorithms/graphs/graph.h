#ifndef GRAPH_H
#define GRAPH_H
#include<iostream>
#include<vector>
using namespace std;
struct AdjListNode
{
    int dest;
    AdjListNode* next;
};
 
/*
 * Adjacency List
 */  
struct AdjList
{
    AdjListNode* head;
};
 
/*
 * Class Graph
 */ 
class Graph
{
    private:
        int V;
        AdjList* array;
    public:
        Graph(int V)
        {
            this->V = V;
            array = new AdjList [V];
            for (int i = 0; i < V; ++i)
                array[i].head = NULL;
        }
        /*
         * Creating New Adjacency List Node
         */ 
        AdjListNode* newAdjListNode(int dest)
        {
            AdjListNode* newNode = new AdjListNode;
            newNode->dest = dest;
            newNode->next = NULL;
            return newNode;
        }
        /*
         * Adding Edge to Graph
         */ 
        void addEdge(int src, int dest)   // adding in the sense that head is updated with new node
        {
            AdjListNode* newNode = newAdjListNode(dest);
            newNode->next = array[src].head;
            array[src].head = newNode;
            newNode = newAdjListNode(src);
            newNode->next = array[dest].head;
            array[dest].head = newNode;
        }
        /*
         * Print the graph
         */ 
        void printGraph()
        {
            int v;
            for (v = 0; v < V; ++v)
            {
                AdjListNode* pCrawl = array[v].head;
                cout<<"\n Adjacency list of vertex "<<v<<"\n head ";
                while (pCrawl)
                {
                    cout<<"-> "<<pCrawl->dest;
                    pCrawl = pCrawl->next;
                }
                cout<<endl;
            }
        }



};




#endif
