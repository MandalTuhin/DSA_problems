#include <iostream>
#include <unordered_map>
#include <vector>

class DirReduction {
public:
  static std::vector<std::string> dirReduc(std::vector<std::string> &arr) {
    int vertical = 0, horizontal = 0;
    //       unordered_map<std::string, int> occurances;
    std::vector<std::string> answer;
    for (size_t i = 0; i < arr.size(); i++) {
      if (arr[i] == "NORTH")
        vertical++;
      else if (arr[i] == "SOUTH")
        vertical--;
      else if (arr[i] == "EAST")
        horizontal++;
      else if (arr[i] == "WEST")
        horizontal--;
    }
    std::cout << vertical << " " << horizontal;
    if (vertical > 0) {
      for (int i = 0; i < vertical; i++) {
        answer.push_back("NORTH");
      }
    } else if (vertical < 0) {
      for (int i = 0; i < -vertical; i++) {
        answer.push_back("SOUTH");
      }
    }

    if (horizontal > 0) {
      for (int i = 0; i < horizontal; i++) {
        answer.push_back("EAST");
      }
    } else if (horizontal < 0) {
      for (int i = 0; i < -horizontal; i++) {
        answer.push_back("WEST");
      }
    }

    return answer;
  }
};

int main() {
  std::vector<std::string> map = {"NORTH", "SOUTH", "SOUTH", "EAST",
                                  "WEST",  "NORTH", "WEST"};
  DirReduction dirReduction;
  std::vector<std::string> answer = dirReduction.dirReduc(map);
  for (auto const &elem : answer) {
    std::cout << elem << " ";
  }
  return 0;
}
