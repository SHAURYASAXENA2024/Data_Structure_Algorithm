#include<iostream>
#include<vector>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
     for(int i = 0; i < n; i++){
        long long x = v[i];
        int cnt = 0;
        if(x==1){
            cout << -1 << endl;
        }
        while(x != 1){
            if(x % 6 == 0){
                x /= 6;
            }
            else{
                x *= 2;
            }
            cnt++;

            if(cnt > 100000){
                cnt = -1;
                break;
            }
        }
    }
    return 0;
}