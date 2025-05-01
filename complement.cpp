#include <cmath>
#include <iostream>
using namespace std;

class Solution {
public:
  int findComplement(int num) {
    int complement = 0;
    int i = 0;
    while (num > 0) {
      int temp = num % 2;
      // cout << pow(2, 0) << " ";
      complement = !temp * pow(2, i) + complement;
      num /= 2;
      i++;
    }
    return complement;
  }
};

int main() {
  Solution solution;
  cout << solution.findComplement(2);
  return 0;
}
