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
int n ; cin >> n;
int minSofar=0;
vi v;
int totalPassenger=0;
rep(i,0,n){
    int a,b;
    cin >> a >> b;
    v.pb(totalPassenger);
    totalPassenger -= a;
    totalPassenger += b;
    v.pb(totalPassenger);
}
 sort(v.begin(),v.end());
minSofar= *max_element(v.begin(),v.end());
cout << minSofar << endl;
return 0;
}