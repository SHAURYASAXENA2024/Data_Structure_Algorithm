#include<iostream>
#include<vector>
using namespace std;
class soltuion{
    public:
    vector<int> constructRectangle(int area){
        int l[area],w[area];
        vector<int> arr;
        for(int i=1; i<area; i++){
            for(int j=1; j<area; j++){
                if(l[i]*w[i]==area){
                arr.push_back(i);
            }
            }
        }

    }
};
int main()
{
    return 0;
}