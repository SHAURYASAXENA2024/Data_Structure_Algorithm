#include<iostream>
#include<vector>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<n; i++){
        if(v[i].size()<10){
            cout << v[i] << endl;
        }
        else{
            int cnt=0;
            int wrd=0;
            for(char ch:v[i]){
                if(cnt==0){
                    for(cnt=0; cnt;){

                    }
                }
            }
        }
    }
    return 0;
}