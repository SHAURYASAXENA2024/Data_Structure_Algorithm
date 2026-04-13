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
while(n--){
    int a; cin >> a;
    string s;
    cin >> s;
    string r;
    r=s;
    sort(r.begin(),r.end());
    for(int i=r.length(),j=s.length()-1; i<j; i++,j--){
        char ch=i;
        j=i;
        
        
    }
    cout << r << endl;
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    FAST
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string b;
        cin >> b;

        // Step 1: build r = distinct chars of b, sorted
        string r = b;
        sort(r.begin(), r.end());
        r.erase(unique(r.begin(), r.end()), r.end());

        // Step 2: decode (same as encode — mapping is its own inverse)
        string decoded = b;
        for(int i = 0; i < n; i++){
            int pos = find(r.begin(), r.end(), b[i]) - r.begin();
            decoded[i] = r[r.size() - 1 - pos];
        }

        cout << decoded << "\n";
    }
    return 0;
}