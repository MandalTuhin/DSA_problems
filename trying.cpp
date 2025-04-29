#include <iostream>
#include <vector>

std::vector<char> uniqueInOrder(const std::string &iterable) {
  std::vector<char> answer;
  //   std::unordered_set<char> unique;
  for (size_t i = 0; i < iterable.size(); i++) {
    if (i == 0) {
      answer.push_back(iterable[0]);
      continue;
    } else if (i != 0) {
      if (iterable[i] == answer.back())
        continue;
      else
        answer.push_back(iterable[i]);
    }
  }
  return answer;
}
