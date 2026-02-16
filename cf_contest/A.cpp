// #include<iostream>
// #include<vector>
// using namespace std;
// class hello {};
// int main()
// {
//     int n; cin >> n;
//     while(n--){
//         int n1; cin >> n1;
//         int f=0;
//         vector<int> v(n1);
//         vector<int> v2;
//         for(int i=0; i<n1; i++) cin >> v[i];
//         // we need the numbers which get the mutilpication 67
//         for(int i=0; i<v.size()-1; i++){
//             if(v[i]!=0 && 67%v[i]==0){
//                 v2.push_back(v[i]);
//             }
//         }
//         int mul=1;
//         for(int i=0; i+1<v2.size(); i++){
//             mul = v2[i]*v2[i+1];
//             if(mul==67){
//                 f=1;
//                 break;
//             }
//             else{
//                 continue;
//             }
//         }
//         cout << mul << endl;
//         if(f==0){
//             cout << "NO" << endl;
//         }
//         else{
//             cout << "YES" << endl;
//         }
//     }
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
class hello {};
int main()
{
    int n; cin >> n;
    while(n--){
        int count1=0;
        int count67=0;
        int countN=0;
        int countneg67=0;
        int n2; cin >> n2;
        vector<int> v(n2);
        for(int i=0; i<n2; i++) cin >> v[i];
        for(int i=0; i<v.size(); i++){
            if(v[i]==1){
                count1++;
            }
            else if(v[i]==67){
                count67++;
            }
            else if(v[i]==-1){
                countN++;
            }
            else if(v[i]==-67){
                countneg67++;
            }
        }
        // if((count1 >0 && count67 >0) || (countN>0 && countneg67>0) ){
        //     cout << "YES" << endl;
        // }
        // else{
        //     cout << "NO" << endl;
        // }
        if(count67 > 0 || (countN > 0 && countneg67 > 0))
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}
