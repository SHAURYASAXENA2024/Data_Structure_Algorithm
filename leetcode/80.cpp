#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class solution {
public:
  void remove(vector<int> &nums) {
    unordered_map<int, int> freq;
    for (int x : nums) {
      freq[x]++;
    }
    vector<int> res;
    for (auto &p : freq) {
      if (p.second >= 2) {
        for (int i = 0; i <= 1; i++) {
          res.push_back(p.first);
        }
      } else if (p.second == 2) {
        for (int i = 0; i <= 1; i++) {
          res.push_back(p.first);
        }
      } else {
        res.push_back(p.first);
      }
    }
    for (int i = 0; i < res.size(); i++) {
      cout << res[i];
    }
  }
  // two pointer approach
  //
  int n = nums.size();

  if (n <= 2)
    return n;

  int k = 2;

  for (int i = 2; i < n; i++) {

    if (nums[i] != nums[k - 2]) {
      nums[k] = nums[i];
      k++;
    }
  }

  return k;
}
}
;
int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  solution s;
  s.remove(v);
}
