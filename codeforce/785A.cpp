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
int main()
{
FAST 
int n; cin >> n;
int Tfaces=0;
int Cfaces=0;
int Ofaces=0;
int Dfaces=0;
int Ifaces=0;
int totalFace=0;
while(n--){
    string polyhedron;
    cin >> polyhedron;
    
    Ifaces=20;
    Tfaces=4;
    Cfaces=6;
    Ofaces=8;
    Dfaces=12;
    if(polyhedron=="Tetrahedron") totalFace += Tfaces;
    else if(polyhedron=="Cube") totalFace += Cfaces;
    else if(polyhedron=="Octahedron") totalFace += Ofaces;
    else if(polyhedron=="Dodecahedron") totalFace += Dfaces;
    else if(polyhedron=="Icosahedron") totalFace += Ifaces;
}
cout << totalFace << endl;
return 0;
}