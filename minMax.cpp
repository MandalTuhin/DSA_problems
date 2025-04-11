#include <iostream>
#include <vector>
using namespace std;

vector<int> minMax(vector<int> &nums) {
  vector<int> result;
  int min, max;
  min = max = nums[0];
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] > max)
      max = nums[i];
    if (nums[i] < min)
      min = nums[i];
  }
  result.push_back(min);
  result.push_back(max);

  return result;
}

int main() {
  vector<int> nums = {1, 3, 4, 5, 7, 29};
  vector<int> result = minMax(nums);
  for (auto number : result) {
    cout << number << " ";
  }
}
