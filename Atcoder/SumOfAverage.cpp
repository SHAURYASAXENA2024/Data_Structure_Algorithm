#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
void SumOfAverage(vector<int> sum) {
  int res = 0;
  int val2 = sum.front();
  res = val2 % 998244353;
  cout << res << endl;
}
int mean(vector<int> a, int n) {
  int l = 0, r = 0;
  vector<int> sum2;
  for (int i = 0; i <= n; i++) {
    for (l = 1, r = 1; l <= n, r <= n; l++, r++) {
      sum2.push_back((a[l] + a[r]) / n);
    }
  }
  vector<int> sum3;
  for (int i = 0; i < sum2.size(); i++) {
    int res = 0;
    res += sum2[i];
    sum3.push_back(res);
  }
  int val1 = sum3.front();
  return val1;
}
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  mean(a, n);
}
