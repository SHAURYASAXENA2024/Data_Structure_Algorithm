#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
    vector<double> convertTempertaure(double celsius){
        vector<double> arr;
        double kelvin = celsius + 273.15;
        double fah = celsius*1.80 + 32.00;
        arr.push_back(kelvin);
        arr.push_back(fah);
        return arr;
    }
};
int main()
{
    return 0;
}