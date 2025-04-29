#include <cctype>
#include <iostream>
#include <string>
#include <vector>

bool is_pangram(const std::string &s) {
  std::vector<bool> alphabet(26, false);
  for (size_t i = 0; i < s.size(); i++) {
    if (std::isalpha(s[i])) {
      alphabet[std::tolower(s[i]) - 'a'] = true;
    }
  }

  for (bool elem : alphabet) {
    std::cout << elem << " ";
  }

  for (int i = 0; i < 26; i++) {
    if (alphabet[i] == false)
      return false;
  }
  return true;
}

int main() {
  std::string s = "The quick, brown fox jumps over the lazy dog";
  // is_pangram(s) ? std::cout << "True" : std::cout << "False";
  std::cout << (is_pangram(s) ? "True" : "False") << std::endl;
  return 0;
}
