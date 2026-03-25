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
string s;
cin >> s;
vi v;
for(char ch :s ){
    if(ch!='+'){
        v.pb(ch-'0');
    }
}
sort(all(v));
for(int i=0; i<sz(v); i++){
    if(i!=0) cout << "+";
    cout << v[i];
}
return 0;
}