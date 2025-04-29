#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
  int romanToInt(string s) {
    int integer = 0;
    std::unordered_map<char, int> characterWeight;
    characterWeight['I'] = 1;
    characterWeight['V'] = 5;
    characterWeight['X'] = 10;
    characterWeight['L'] = 50;
    characterWeight['C'] = 100;
    characterWeight['D'] = 500;
    characterWeight['M'] = 1000;
    for (size_t i = 0; i < s.size(); i++) {
      if (s[i] == 'I' && (s[i + 1] == 'X' || s[i + 1] == 'V')) {
        integer += characterWeight[s[i + 1]] - characterWeight['I'];
        i++;
      } else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
        integer += characterWeight[s[i + 1]] - characterWeight['X'];
        i++;
      } else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
        integer += characterWeight[s[i + 1]] - characterWeight['C'];
        i++;
      } else {
        integer += characterWeight[s[i]];
      }
    }
    return integer;
  }
};

int main() {
  string s = "MCMXCIV";
  Solution solution;
  cout << solution.romanToInt(s);
  return 0;
}
