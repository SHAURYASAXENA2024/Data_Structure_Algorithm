#include<iostream>
#include<vector>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    int b; cin >> b;
    int d; cin >> d;
    vector<int> v(n);
    int waste=0;
    int empty=0;
       
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<n; i++){
        if(v[i]<b){
            waste += v[i];
        }
        else if(v[i]>b){
            continue;;
        }
        else if(waste == d){
            empty++;
        }
        else{
            empty=0;
        }
    }
    cout << empty << endl;
}