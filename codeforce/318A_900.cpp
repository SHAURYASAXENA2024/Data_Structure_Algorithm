#include<iostream>
#include<vector>
using namespace std;
class hello {};
int main()
{
    long long n; cin >> n;
    long long k; cin >> k;
    vector<int> v;
    for(int i=1; i<=n; i=i+2){
        v.push_back(i);
    }
    for(int i=2; i<=n; i=i+2){
        v.push_back(i);
    }
    int cnt=0;
    cout << v[k-1] << endl; 
    return 0;
}
// optimize version
#include<iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long oddCount = (n + 1) / 2;
    if (k <= oddCount) {
        cout << (2 * k - 1) << endl;
    }
    else {
        cout << (2 * (k - oddCount)) << endl;
    }

    return 0;
}
