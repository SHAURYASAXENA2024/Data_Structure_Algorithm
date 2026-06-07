#include<iostream>
using namespace std;
class node {
    public:
    int vertex;
    node* next;
    node(int v){
        vertex = v;
        next = NULL;
    }
};
class Graph{
    private:
    int v;
    node** adj;
    public:
    Graph(int vertices){
        v=vertices;
        adj= new node*[v];
        for(int i=0; i<v; i++){
            adj[i] = nullptr;
        }
    }
    void addEdge(int v , int u){
        if(u<0 || u>=v || v<0 || v>=u){
            cout << "invalid edge" << endl;
            return ;
        }
        node* newnode = new node(v);
        newnode->next=adj[u];
        adj[v]=newnode;

        newnode = new node(u);
        newnode->next=adj[v];
        adj[v]=newnode;
    }
    void printGraph(){
        for(int i=0; i<v; i++){
            cout << i << ":" ;
            node* temp = adj[i];
            while(temp){
                cout << temp->vertex << "->" ;
                temp=temp->next;
            }
            cout << "NULL\n";
        }
    }
};
int main()
{
    return 0;
}   
// shortuct of adjancey list for graph
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
#define pb   push_back
#define mp   make_pair
#define fi   first
#define se   second
#define all(x)  (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define sz(x)    (int)(x).size() 
#define rep(i,a,b) for(int i=a; i<b; i++)
#define yes  cout << "YES\n"
#define no   cout << "NO\n"
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const int MAXN = 1e5 + 5;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
class hello {};
class Graph{
    int v;
    vector<vector<int>> adj;
    public:
    Graph(int V){
        v=V;
        adj.resize(V);
    }
    void addEdge(int u ,int v){
        adj[u].push_back(v);
    }
    void printGraph() {
        for (int i = 0; i < v; i++) {
            cout << i << " -> ";
            for (int v : adj[i]) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
FAST 
return 0;
}