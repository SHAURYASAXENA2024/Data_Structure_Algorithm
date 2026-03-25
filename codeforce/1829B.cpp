#include<iostream>
#include<vector>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    int l=0;
    while(n--){
        int t; cin >> t;
        vector<int> v(t);
        for(int i=0; i<t; i++){
            cin >> v[i];
        }
        for(int i=0; i<v.size()-1; i++){
            if((v[i]==0 || v[i]==1)|| (v[i])){
                l++;
            }
        }
    }
    cout << l << endl;
    return 0;
}