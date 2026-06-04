#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  vector<int> ans(n);
  int suffix = 1;
  int prffix = 1;
  for (int i = 0; i < n; i++) {
    ans[i] = prffix;
    prffix *= nums[i];
  }
  for (int i = n - 1; i >= 0; i--) {
    ans[i] *= suffix;
    suffix *= nums[i];
  }
  for (int c : ans) {
    cout << c << endl;
  }
  return 0;
}
