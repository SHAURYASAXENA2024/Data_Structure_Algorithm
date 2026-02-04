#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class solution {
    public:
    vector<vector<int>> mabsdiff(vector<int>& arr){
        vector<int> diff;
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size()-1; i++){
            diff.push_back(abs(arr[i+1]-arr[i]));
        }
        // for(int i=0; i<diff.size()-1; i++){
            
        // }
        sort(diff.begin(),diff.end());
        //min difference in the list should be diff[0]
        vector<vector<int>> list;
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i]<arr[i+1]){
                if(arr[i+1]-arr[i]==diff[0]){
                    list.push_back({arr[i],arr[i+1]});
                }
            }
            else{
                continue;
            }
        }
        sort(list.begin(),list.end());
        return list;
    }
};
int main()
{
    return 0;
}