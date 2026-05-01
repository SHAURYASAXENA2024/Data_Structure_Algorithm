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
int mcm(int dims[], int i , int j){
    if(i==j) return 0;
    int minCost = INT_MAX;
    for(int k=i; k<j; k++){
        int cost = mcm(dims,i,k)+ mcm(dims,k+1,j)
        + dims[i-1]*dims[j]*dims[k];

        minCost= min(minCost,cost);
    }
    return minCost;
}
int main()
{
FAST 
/* Question of the matrix chain multiplation (mcm)*/
/* find the min cost of the matrix multiplcation */
int dims[] = {10,30,5,60};
int n = sizeof(dims)/sizeof(dims[0]);
int numMatrices = n-1;
cout << "Minimum multiplications: " << mcm(dims, 0, numMatrices-1) << endl;
return 0;
}