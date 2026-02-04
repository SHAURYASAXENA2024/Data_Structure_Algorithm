#include<iostream>
#include<set>
#include<queue>
using namespace std;
class Graph {
    public:
    int n;
    vector<vector<pair<int,int>>> adj;
    Graph(int nodes){
        n=nodes;
        adj.resize(n+1);
    }
    void addEdge(int u , int v, int w){
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vector<int> dijkastra(int v, vector<vector<int>> adj[], int s){
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> dist(v);
        for(int i=0; i<v; i++) dist[i]=1e9;
        dist[s]=0;
        pq.push({0,s});
        while(!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it:adj[node]){
                int edgeWeight = it[1];
                int adjNode = it[0];

                if(dis + edgeWeight < dist[adjNode]){
                    dist[adjNode]=dis+edgeWeight;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        return dist;
    }
};
int main()
{
    return 0;
}