#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeros(vector<int> &nums) {
  int temp;
  for (int i = 0; i < nums.size() - 1; i++) {
    if (nums[i] == 0) {

      if (nums[i] == 0 && nums[i + 1] != 0) {
        temp = nums[i + 1];
        nums[i + 1] = 0;
        nums[i] = temp;
      }
      if (nums[i + 1] == 0 && nums[i + 2]) {
      }
    }
  }
  return nums;
}

int main() {
  vector<int> nums = {0, 1, 0, 3, 12};
  vector<int> result = moveZeros(nums);
  for (int number : result) {
    cout << number << " ";
  }
  return 0;
}
