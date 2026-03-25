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
    vector<int> selfDividingNumbers(int left, int right){
        // vector<int> digits;
        // vector<int> numbers;
        // for(int i=left; i<=right; i++){
        //     int n=i%10;
        //     digits.pb(i);
        //     n=n/10;

        // }
        vector<int> digits;
    vector<int> numbers;
    for (int i = left; i <= right; i++) {
        int n = i;
        bool isSelfDividing = true;
        while (n > 0) {
            int digit = n % 10;
            if (digit == 0 || i % digit != 0) {
                isSelfDividing = false;
                break;
            }
            n /= 10;
        }
        if (isSelfDividing) numbers.push_back(i);
    }
    return numbers;
    }
};
int main()
{
FAST 
return 0;
}