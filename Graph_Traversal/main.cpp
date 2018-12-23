#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (int i = 0;i < adj[v].size(); i++)
           cout << "-> " << adj[v].at(i);
        printf("\n");
    }
}
void BFS(vector<int> adj[], int V,int FirstNode)
{
    bool visited[V];
    for(int i = 0;i < V;i++)
    {
        visited[i] = 0;
    }
    queue<int> Nodes;
    Nodes.push(FirstNode);
    while(!Nodes.empty())
    {
        int current = Nodes.front();
        Nodes.pop();
        if(visited[current] == 1) continue;
        else
        {
            visited[current] = 1;
            cout << current;

            for (int i = 0;i < adj[current].size(); i++)
                Nodes.push(adj[current].at(i));

        }

    }
}
void DFS_Using_Recursion(vector<int> adj[], bool visited[],int CurrentNode)
{
    if (visited[CurrentNode] == 1)
    {
        return;
    }

    visited[CurrentNode] = 1;
    cout << CurrentNode;
    for (int i = 0;i < adj[CurrentNode].size(); i++)
    {


        DFS_Using_Recursion(adj,visited,adj[CurrentNode].at(i));
    }
    return;
}
void DFS_Using_Stack(vector<int> adj[], int V,int FirstNode)
{
    bool visited[V];
    for(int i = 0;i < V;i++)
    {
        visited[i] = 0;
    }
    stack<int> Nodes;
    Nodes.push(FirstNode);
    while(!Nodes.empty())
    {
        int current = Nodes.top();
        Nodes.pop();
        if(visited[current] == 1) continue;
        else
        {
            visited[current] = 1;
            cout << current;

            for (int i = 0;i < adj[current].size(); i++)
                Nodes.push(adj[current].at(i));

        }

    }

}

int main()
{
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 2, 5);
    //printGraph(adj, V);
    //BFS(adj, V,4);
    DFS_Using_Stack(adj, V,0);
    cout << endl;
    bool visited[V];
    for(int i = 0;i < V;i++)
    {
        visited[i] = 0;
    }
    DFS_Using_Recursion(adj,visited,0);

    return 0;
}
