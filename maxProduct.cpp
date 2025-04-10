#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int maxProduct(vector<int> &nums) {
  int max, second_max;
  max = second_max = INT_MIN;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > max) {
      second_max = max;
      max = nums[i];
    } else if (nums[i] > second_max) {
      second_max = nums[i];
    }
  }
  return (max - 1) * (second_max - 1);
}

int main() {
  vector<int> nums = {1, 14, 5, 2};
  cout << maxProduct(nums);
}
