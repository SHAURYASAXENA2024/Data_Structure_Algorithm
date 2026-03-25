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
class solution {
    public:
    int findNumbers(vector<int>& nums){
        vector<int> digits;
        for(int i=0; i<nums.size(); i++){
            int count=0;
            int n =nums[i];
            while(n>0){
                int d=n%10;
                count++;
                n=n/10;
            }
            digits.pb(count);
        }
        int total=0;
        for(int i=0; i<digits.size(); i++){
            if(digits[i]%2==0){
                total++;
            }
        }
        return total;
    }
};
int main()
{
FAST 
return 0;
}