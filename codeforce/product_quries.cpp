#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class hello {};
void cal(int i , vector<int> v){
    int no=i%v[i];
    cout << no << endl;
}
int main()
{
    int t; cin >> t;
    int n; cin >> n;
    vector<int> v;
    vector<int> dif;
    int c=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=1; i<n; i++){
        if(i==v[i]){
            cout << 1 << endl;
        }
        else if(i!=v[i]){
            if(i%v[i]!=0){
                cout << -1 << endl;
            }
            else{
                if(i%v[i]==0){
                    dif.push_back(v[i]);
                    return i;
                    cal(i,dif);
                    break;
                }
            }
        }
    }
    return 0;
}