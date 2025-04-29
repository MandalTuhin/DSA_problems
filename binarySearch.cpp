#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &nums, int k) {
  int i = 0, j = nums.size() - 1, mid;
  while (i <= j) {
    mid = i + ((j - i) / 2);
    if (k == nums[mid])
      break;
    else if (k < nums[mid])
      j = mid - 1;
    else if (k > nums[mid])
      i = mid + 1;
  }
  if (mid > 0 && nums[mid - 1] == nums[mid]) {
    i = mid;
    while (nums[i] == nums[mid]) {
      i--;
    }
    return ++i;
  }

  return -1;
}

int main() {
  vector<int> nums = {1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5};
  int k = 1;
  int result = binarySearch(nums, k);
  if (result != -1) {
    cout << "Element " << k << " is present at index: " << result;
  } else {
    cout << "Element not found ";
  }
  return 0;
}
