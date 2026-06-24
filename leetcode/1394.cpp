class Solution {
public:
  int findLucky(vector<int> &arr) {
    vector<int> res;
    unordered_map<int, int> mp;
    for (int x : arr) {
      mp[x]++;
    }
    for (auto it : mp) {
      if (it.first == it.second) {
        res.push_back(it.first);
      }
    }
    if (res.empty()) {
      return -1;
    }
    if (res.size() == 1) {
      return res[0];
    } else {
      return *max_element(res.begin(), res.end());
    }
  }
};
