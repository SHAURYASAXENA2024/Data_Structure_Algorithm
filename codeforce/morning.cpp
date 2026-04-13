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
int n;
cin >> n;
int press=0;
int move=0;
int TotalMinMove=0;
vector<int> v(n);
while(n--){
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
}
for(int i=0; i<v.size(); i++){
    if(v[0]==1 || v[0]==2 || v[0]==3 || v[0]==4 || v[0]==5 || v[0]==6 || v[0]==7 || v[0]==8 || v[0]==9 || v[0]==0){
        press++;
    }
    else{
        for(int j=0; j<10; j++){
            if(v[i]==j) press++;
            else{
                move++;
                continue;
            }
        }
    }
}
TotalMinMove=press+move;
cout << TotalMinMove << endl;
return 0;
}
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
int n;
cin >> n;
while(n--){
    string pin;
    cin >> pin;
    int press=0;
    int move=0;
    int TotalMinMove=0;
    int cur=1;                                         // FIX 5: cursor starts at 1
    for(int i=0; i<4; i++){
        int target=(pin[i]=='0') ? 10 : (pin[i]-'0'); // FIX 1,6: read string, 0->pos 10
        move+=abs(cur-target);                         // FIX 4: distance to target
        press++;                                       // FIX 2,3: press once per digit
        cur=target;                                    // FIX 5: update cursor
    }
    TotalMinMove=press+move;
    cout << TotalMinMove << "\n";
}
return 0;
}