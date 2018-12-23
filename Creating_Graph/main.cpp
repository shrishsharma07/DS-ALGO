#include <bits/stdc++.h>

using namespace std;

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
int main()
{
    int V;
    cin >> V;
    vector<int> Graph_Edge[V];
    add_edges(Graph_Edge, 1,5);
    add_edges(Graph_Edge,2,3);
    add_edges(Graph_Edge,3,5);
    cout << "Hello world!" << endl;
    print_graph(Graph_Edge,V);
    return 0;
}
