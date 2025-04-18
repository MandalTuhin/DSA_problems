#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverse_words(std::string str) {
  vector<std::string> reverse_words;
  int i = 0;
  while (i < str.size()) {
    if (str[i] != ' ') {
      reverse_words.push_back(str[i]);
      i++;

    } else {
      break;
    }
  }
}

int main() {
  string str = "The quick brown fox jumps over the lazy dog.";
  cout << reverse_words(str);
  return 0;
}
