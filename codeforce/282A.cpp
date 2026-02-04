#include<iostream>
#include<vector>
#include<string>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    cin.ignore();
    vector<string> str(n);
    for(int i=0; i<n; i++){
        getline(cin,str[i]);
    }
    int x=0;
    int pre=0;
    int post=0;

for (int i = 0; i < n; i++) {
    int cnt = 0;

    for (char ch : str[i]) {
        if (ch == '+') {
            cnt++;
        } 
        else if (ch == '-') {
            cnt--;
        }
    }

    if (cnt == 2) {
        x++;      // ++X or X++
    } 
    else if (cnt == -2) {
        x--;      // --X or X--
    }
}

cout << x << endl;
    return 0;
}