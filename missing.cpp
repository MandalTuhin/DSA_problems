#include <iostream>
#include <vector>
using namespace std;

int missingNum(const vector<int> &nums) {
  int missing = 0;
  for (size_t i = 0; i < nums.size(); i++) {
    missing ^= nums[i] ^ (i + 1);
  }
  missing ^= nums.size() + 1;
  return missing;
}

int main() {
  vector<int> nums = {1, 2, 3, 5};
  cout << missingNum(nums);
  return 0;
}
