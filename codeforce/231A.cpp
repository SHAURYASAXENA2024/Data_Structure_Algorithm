#include<iostream>
#include<vector>
using namespace std;
class hello {};
void index(int r){
    cout << r << endl;
}
int main()
{
    int n; cin >> n;
    int a[n][3];
    int in=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<3; j++){
            if(a[i][j]==1){
                count++;
            }
        }
        if(count>=2){
            in++;
        }
    }
    index(in);
    return 0;
}