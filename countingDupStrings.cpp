#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;
size_t duplicateCount(const std::string &in) {
  // bruteforce
  size_t count = 0;
  unordered_set<char> characters;
  unordered_set<char> answer;
  for (size_t i = 0; i < in.size(); i++) {
    char lowercase;
    in[i] >= 65 && in[i] <= 90 ? lowercase = in[i] + 32 : lowercase = in[i];
    if (characters.find(lowercase) != characters.end()) {
      answer.insert(lowercase);
    } else {
      characters.insert(lowercase);
    }
  }
  return answer.size();
}

int main() {
  string in = "(abcdeaa)";
  cout << duplicateCount(in);
  return 0;
}
