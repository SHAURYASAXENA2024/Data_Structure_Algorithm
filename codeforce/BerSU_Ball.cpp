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
// int TotalPair(int n[],int m[]){
//     if(n==0 || m==0) return 0;
//     if(memo[i][j]!= -1) return memo[i][j];
// }
int main()
{
FAST 
int n ; cin >> n;
vi boysSkills(n);
for(int i=0; i<boysSkills.size(); i++) cin >> boysSkills[i];
int m; cin >> m;
vi girlsSKills(m);
for(int i=0; i<girlsSKills.size(); i++) cin >> girlsSKills[i];
/* My First Approach  == BRUTE FORCE
using two pointer we can intilaze the i pointer on the boys skill array and j pointer in the girls skills array in starting.
And then we can subract the (i-j) oif itis equal to 1 or -1 we can increment the pair by 1 and then increment j only but it 
will take too much time so it not that optimial just the first thought approach */
/*2nd approach = DP i think this problem can a version of knapsack we can use recurisve + memo approch in this.*/
/* this apporach is greedy and sorting which called general max bipartite algorthim*/
sort(boysSkills.begin(),boysSkills.end());
sort(girlsSKills.begin(),girlsSKills.end());
int i=0, j=0,pairs=0;
while(i<n && j<m){
    if(abs(boysSkills[i]-girlsSKills[j])<=1){
        i++,j++;
        pairs++;
    }
    else if(boysSkills[i]<girlsSKills[j]){
        i++;
    }
    else{
        j++;
    }
}
cout << pairs << endl;
return 0;
}