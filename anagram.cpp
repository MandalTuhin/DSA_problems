#include <cctype>
#include <iostream>
#include <set>
#include <string>

bool isAnagram(std::string test, std::string original) {
  std::multiset<char> characters;
  for (size_t i = 0; i < original.size(); i++) {
    characters.insert(std::tolower(original[i]));
  }
  for (size_t i = 0; i < test.size(); i++) {
    auto it = characters.find(std::tolower(test[i]));
    if (it != characters.end())
      characters.erase(it);
  }
  if (characters.empty())
    return true;
  return false;
}

int main() {
  std::string test = "apple", original = "appeal";
  std::cout << isAnagram(original, test);
  return 0;
}
