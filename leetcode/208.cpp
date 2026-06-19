class node {
public:
  node *links[26];
  bool flag = false;

  node() {
    for (int i = 0; i < 26; i++) {
      links[i] = NULL;
    }
  }

  bool containKey(char ch) { return links[ch - 'a'] != NULL; }

  void put(char ch, node *newNode) { links[ch - 'a'] = newNode; }

  node *get(char ch) { return links[ch - 'a']; }

  void setEnd() { flag = true; }

  bool isEnd() { return flag; }
};

class Trie : public node {
private:
  node *root;

public:
  Trie() { root = new node(); }

  void insert(string str) {
    node *temp = root;

    for (int i = 0; i < str.length(); i++) {
      if (!temp->containKey(str[i])) {
        temp->put(str[i], new node());
      }
      temp = temp->get(str[i]); // FIXED
    }
    temp->setEnd(); // FIXED
  }

  bool search(string word) {
    node *temp = root;

    for (int i = 0; i < word.length(); i++) {
      if (!temp->containKey(word[i])) {
        return false;
      }
      temp = temp->get(word[i]); // FIXED
    }

    return temp->isEnd();
  }

  bool startswith(string prefix) {
    node *temp = root;

    for (int i = 0; i < prefix.length(); i++) {
      if (!temp->containKey(prefix[i])) {
        return false;
      }
      temp = temp->get(prefix[i]);
    }

    return true;
  }
};
