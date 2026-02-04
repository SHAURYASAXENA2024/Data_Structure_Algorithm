#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    int sumOfMultiple(int n){
        // brute force
        vector<int> arr;
        for(int i=1; i<=n; i++){
            if(i%3==0 || i%5==0 || i%7==0){
                arr.push_back(i);
            }
        }
        int sum=0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
        }
        return sum;
        // write the optimized according to me can be hashing
    }
};
int main()
{
    return 0;
}