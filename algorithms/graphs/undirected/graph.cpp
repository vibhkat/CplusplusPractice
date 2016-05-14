#include"graph.h"
int main()
{
Graph gh(5);
    gh.addEdge(0, 1).addEdge(0, 4).addEdge(1, 2);
    gh.addEdge(1, 3);
    gh.addEdge(1, 4);
    gh.addEdge(2, 3);
    gh.addEdge(3, 4);
    gh.DFS(0);
 std::cout<<std::endl;
gh.BFS(0);
  std::cout<<std::endl;

    // print the adjacency list representation of the above graph
    gh.printGraph();
}
