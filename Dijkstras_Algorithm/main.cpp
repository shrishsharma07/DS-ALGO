#include<bits/stdc++.h>

using namespace std;

void make_Edge(vector <pair<int, int> > Graph[],int S,int T,int W)
{
    Graph[S].push_back(make_pair(T,W));
   // Graph[T].push_back(make_pair(S,W));  // Uncomment it for undirectional graph

}
void print_graph(vector<pair<int,int> > Graph[],int V)//
{
    for(int i = 1;i < V;i++)
    {
        cout << "Source Vertex  " << i;
        for(int j = 0;j < Graph[i].size();j++)
        {
            cout <<"->   Target " <<Graph[i].at(j).first;
            cout << "  Weight  " <<Graph[i].at(j).second;
        }
        cout << endl;

    }

}
int find_min_node(int distance[],bool Visited[],int Nodes)
{
    int minVertex = -1;
    for(int i = 1; i < Nodes; i++)
    {
        if(!Visited[i] && (minVertex == -1 || distance[minVertex] > distance[i]))
        {
            minVertex = i;
        }
    }
    return minVertex;

}
void dijkstras_Algorithm(vector<pair<int,int> > Graph[],int Nodes)
{
    int distance[Nodes];
    bool Visited[Nodes];
    int Source_Nodes[Nodes];
    for (int i=0;i < Nodes;i++)
    {
        distance[i] = INT_MAX;
        Visited[i] = false;
    }
    distance[1] = 0; // Initlize the source node as zero
    for (int i = 1; i < Nodes; i++)
    {
        int Minimum_Node = find_min_node(distance,Visited,Nodes);
        Visited[Minimum_Node] = true;
        //cout << Minimum_Node << endl;
        for(int j = 0;j < Graph[Minimum_Node].size();j++)
        {
            if (!Visited[j])
            {
                int dist = distance[Minimum_Node] + Graph[i].at(j).second;
                int Sink_Node = Graph[i].at(j).first;

                if(dist < distance[Sink_Node])
                {
                    distance[Sink_Node] = dist;
                    Source_Nodes[Sink_Node] = Minimum_Node;
                }

            }

        }

    }
    for (int i=2;i < Nodes;i++)
    {
        cout << i <<"     "<<distance[i] <<"     " << Source_Nodes[i]<<endl;
    }
}
int main()
{
    vector<pair<int,int> > Graph[6];
    make_Edge(Graph,1,2,3);
    make_Edge(Graph,2,3,4);
    make_Edge(Graph,3,4,1);
    make_Edge(Graph,4,5,1);
    //print_graph(Graph,6);
    dijkstras_Algorithm(Graph,6);
    return 0;
}
