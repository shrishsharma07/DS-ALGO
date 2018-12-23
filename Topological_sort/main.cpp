#include <bits/stdc++.h>

using namespace std;
void Topological_Sort_Recursion(vector<int> Graph_Edge[],bool visited[],stack<int> Top_sorted,int CurrentVertex);
void add_edges(vector<int> adj[],int i,int j)
{
    adj[i].push_back(j);
    adj[j].push_back(i);

}
void print_graph(vector<int> adj[],int v)
{
    for (int i = 0;i < v;i++)
    {
        cout << "Vector components are" << v << "    ";
       for (int j = 0; j < adj[i].size(); j++)
        {
		cout << "-> "<< adj[i].at(j);
        }
        cout << endl;
    }
}
void Topological_Sort(vector<int> Graph_Edge[],int NoOfVertex)
{
    stack<int> Top_sorted;
    bool visited[NoOfVertex];
     for(int i = 1;i < NoOfVertex;i++)
    {
        visited[i] = 0;

    }
    for(int i = 1;i < NoOfVertex;i++)
    {
        if (visited[i] == 0)
        {
            Topological_Sort_Recursion(Graph_Edge,visited,Top_sorted,i);
        }

    }

    while(!Top_sorted.empty())
    {
        cout << Top_sorted.top();
        Top_sorted.pop();

    }
    for(int i = 1;i < NoOfVertex;i++)
    {
       // cout << visited[i] << endl;

    }
}
void Topological_Sort_Recursion(vector<int> Graph_Edge[],bool visited[],stack<int> Top_sorted,int CurrentVertex)
{
        if (visited[CurrentVertex] == 1)
            return;
        visited[CurrentVertex] = 1;

        for (int j = 0; j < Graph_Edge[CurrentVertex].size(); j++)
        {
            Topological_Sort_Recursion(Graph_Edge,visited,Top_sorted,Graph_Edge[CurrentVertex].at(j));
        }
        cout << CurrentVertex;
        Top_sorted.push(CurrentVertex);
        return;

}


int main()
{
    int V = 9;
    vector<int> Graph_Edge[V];
    add_edges(Graph_Edge, 1,3);
    add_edges(Graph_Edge,2,3);
    add_edges(Graph_Edge,2,4);
    add_edges(Graph_Edge,3,5);
    add_edges(Graph_Edge,5,8);
    add_edges(Graph_Edge,5,6);
    add_edges(Graph_Edge,4,6);
    add_edges(Graph_Edge,6,7);
    //cout << "Hello world!" << endl;
    //print_graph(Graph_Edge,V);
    Topological_Sort(Graph_Edge,V);
    return 0;
}
