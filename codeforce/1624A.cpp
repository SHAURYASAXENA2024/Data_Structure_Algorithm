#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    while(n--){
        int sz;
        cin >> sz;
        int res=0;
    vector<int> arr(sz);
    for(int i=0; i<sz; i++){
        cin >> arr[i];
    }
    int mx=arr[0];
    for(int i=1; i<sz; i++){
        mx=max(mx,arr[i]);
    }
    res=mx-*min_element(arr.begin(), arr.end());
    cout << res << endl;
    }
    return 0;
}