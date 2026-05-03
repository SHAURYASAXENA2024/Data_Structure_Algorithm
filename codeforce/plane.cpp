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
    int V;
    vector<vector<int>> adj;
    public:
    Graph(int V){
        this->V=V;
        adj.resize(V);
    }
    void addEdge(int u ,int v){
        adj[u].push_back(v);
    }
    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << i << " -> ";
            for (int v : adj[i]) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
    bool hasLoveTriangle() {
        for(int i = 0; i < V; i++) {
            if(adj[i].empty()) continue;

            int a = i;
            int b = adj[a][0];      // a → b
            int c = adj[b][0];      // b → c

            if(adj[c][0] == a) {    // c → a
                return true;
            }
        }
        return false;
    }
};
int main()
{
    FAST;   
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
       cin >> v[i]; v[i]--;
    }
 Graph g(n);

    // Build graph
    for(int i = 0; i < n; i++) {
        g.addEdge(i, v[i]);
    }

    if(g.hasLoveTriangle()) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}