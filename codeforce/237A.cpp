#include<iostream>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    int a[n][2];
    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    int count =1;
    for(int i=0; i<n-1; i++){
        if(a[i][0] == a[i+1][0] && a[i][1] == a[i+1][1]){
                count++;
            }
    }
    if(count==n){
        cout << count << endl;
    }
    else if(count>=2){
        cout << count << endl;
    }
    else{
        cout << 1 << endl;
    }
    return 0;
}