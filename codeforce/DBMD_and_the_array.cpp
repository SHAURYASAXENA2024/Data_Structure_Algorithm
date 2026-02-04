// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// class hello {};
// int main()
// {
//     int t; cin >> t;
//     while(t--){
//         int n,s,x;
//         cin >> n;
//         cin >> s; cin >> x;
//         int f=0;
//         vector<int> v(n);
//         for(int i=0; i<n; i++){
//             cin >> v[i];
//         }
//         // check the sum of the array
//         int sum=0;
//         for(int i=0; i<n; i++){
//             sum=sum+v[i];
//         }
//         if(sum==s){
//             cout << "YES" << endl;
//         }
//         if(sum!=s){
//             int diff = s-sum;
//                 for(int i=0; i<n; i++){
//                     if(diff==v[i]){
//                         f=1;
//                         break;
//                     }
//                     else if(diff%x==0){
//                         cout << "YES" << endl;
                        
//                     }
//                     else{
//                         f=0; break;
//                     }
//                 }
//         }
//         if(f==1){
//             cout << "YES" << endl;
//         }
//         else cout << "NO" << endl;
//     }
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t; 
    cin >> t;

    while(t--){
        int n, s, x;
        cin >> n >> s >> x;

        int f = 0;
        vector<int> v(n);
        int sum = 0;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
            if(v[i] == x) f = 1;   // check if x exists
        }

        if(sum == s){
            cout << "YES\n";
            continue;
        }

        if(sum > s){
            cout << "NO\n";
            continue;
        }

        int diff = s - sum;

        if(f == 1 && x != 0 && diff % x == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
