#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
    int averageValue(vector<int>& nums){
        vector<int> even;
        int c=0;
        int average=0;
        int sumOfnumber=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
        }
        for(int i=0; i<even.size(); i++){
            if(even[i]%3==0){
                sumOfnumber = sumOfnumber+even[i];
                c++;
            }
        }
        if(c==0){
            return 0;
        }
        else{
            average=sumOfnumber/c;
        }
        return average;
        
    }
};
int main()
{
return 0;
}