#include <iostream>
#include <unordered_set>
using namespace std;

class TwoToOne {
public:
  static string longest(const string &s1, const string &s2) {
    string s_unique = "";
    unordered_set<int> unique;
    for (size_t i = 0; i < s1.size(); i++) {
      if (unique.count(s1[i])) {
        continue;
      } else {
        unique.insert(s1[i]);
        s_unique.push_back(s1[i]);
      }
    }
    for (size_t i = 0; i < s2.size(); i++) {
      if (unique.count(s2[i])) {
        continue;
      } else {
        unique.insert(s2[i]);
        s_unique.push_back(s2[i]);
      }
    }

    for (const auto &elem : s_unique) {
      cout << elem << " ";
    }

    // sorting logic, I will use bubble sort;
    for (size_t i = 0; i < s_unique.size(); i++) {
      for (size_t j = 0; j < s_unique.size() - 1; j++) {
        if (s_unique[j] > s_unique[j + 1]) {
          int temp = s_unique[j];
          s_unique[j] = s_unique[j + 1];
          s_unique[j + 1] = temp;
        }
      }
    }

    return s_unique;
  };
};

int main() {
  string s1 = "aretheyhere", s2 = "yestheyarehere";
  TwoToOne twoToOne;
  cout << twoToOne.longest(s1, s2);
  return 0;
}
