#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    unordered_map<int,int> map;
    for(int i=0; i<v.size(); i++){
        map[v[i]]=i+1;
    }
    for(int i=1; i<=v.size(); i++){
        cout << map[i] << endl;
    }
    return 0;
}