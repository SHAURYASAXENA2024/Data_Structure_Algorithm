
class MyHashSet {
public:
  vector<int> hs;
  MyHashSet() { hs.resize(100001, -1); }

  void add(int key) { hs[key] = key; }

  void remove(int key) { hs[key] = -1; }

  bool contains(int key) {
    if (hs[key] != -1) {
      return true;
    } else
      return false;
  }
};
