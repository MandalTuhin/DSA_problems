#include <iostream>

using namespace std;

class Solution {
public:
  int numWaterBottles(int numBottles, int numExchange) {
    int empty = 0, drank = 0, temp = 0;
    do {
      drank += numBottles;
      temp = numBottles;
      numBottles = (empty + numBottles) / numExchange;
      empty += (temp % numExchange);
    } while (numBottles > 0);
    return drank;
  }
};
int main() {
  int numBottles = 15, numExchange = 4;
  Solution solution;
  cout << solution.numWaterBottles(numBottles, numExchange);
  return 0;
}
