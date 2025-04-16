#include <cstddef>
#include <filesystem>
#include <iostream>
#include <set>
#include <string>
using namespace std;

bool validAnagram(string s, string t) {
  if (s.length() != t.length())
    return false;
  multiset<char> characters;
  for (size_t i = 0; i < s.size(); i++) {
    characters.insert(s[i]);
    cout << "success \n";
  }
  for (size_t i = 0; i < t.size(); i++) {
    auto it = characters.find(t[i]);
    if (it != characters.end()) {
      characters.erase(it);
      cout << "removing...";
    } else {
      cout << "falseee";
    }
  }
  if (characters.empty())
    return true;
  return false;
}

int main() {
  string s = "racecar", t = "carrace";
  validAnagram(s, t) ? cout << "yes" : cout << "no";
}
