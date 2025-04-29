#include <iostream>
#include <string>

class RevRot {
public:
  static std::string revRot(const std::string &strng, unsigned int sz) {
    if (sz <= 0 || strng == "")
      return "";
    if (sz > strng.length())
      return "";
    std::string result = "";

    // int sum = 0;
    for (int i = 0; i < strng.size(); i++) {
      int sum = 0;
      for (int j = 0; j < sz; j++) {
        if ((sz * i) + j > strng.size() - 1)
          return result;
        sum += strng[(sz * i) + j] - '0';
      }
      if (sum % 2 == 0) {
        for (int j = 0; j < sz; j++) {
          //             swap[strng[(sz * i) + j], strng[(sz * (i + 1)) - (j +
          //             1)]];
          result.push_back(strng[sz * (i + 1) - (j + 1)]);
          // result.push_back(' ');
        }
      } else if (sum % 2 != 0) {
        char temp = strng[sz * i];
        // std::cout << temp;
        for (int j = 0; j < sz - 1; j++) {
          result.push_back(strng[(sz * i) + j + 1]);
        }
        result.push_back(temp);
        // result.push_back(' ');
      }
    }
    return result;
  };
};

int main() {
  std::string strng = "123456987654";
  RevRot revrot;
  std::cout << revrot.revRot(strng, 6);
  return 0;
}
