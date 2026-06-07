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
const int RUN = 32;
 
void insertionSortRange(vector<int>& arr, int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = arr[i], j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
 
void timSort(vector<int>& arr) {
    int n = arr.size();
    // Sort individual runs of size RUN
    for (int i = 0; i < n; i += RUN)
        insertionSortRange(arr, i, min(i + RUN - 1, n - 1));
    // Merge runs
    for (int size = RUN; size < n; size *= 2)
        for (int left = 0; left < n; left += 2 * size) {
            int mid   = min(left + size - 1, n - 1);
            int right = min(left + 2*size - 1, n - 1);
            if (mid < right)
                merge(arr, left, mid, right);
        }
}
int main()
{
FAST 
return 0;
}