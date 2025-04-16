#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int> &nums) {
  unordered_set<int> contains;
  for (int i = 0; i < nums.size(); i++) {
    if (contains.find(nums[i]) != contains.end()) {
      return true;
    }
    contains.insert(nums[i]);
  }
  return false;
}

int main() {
  vector<int> nums = {1, 2, 3, 4};
  containsDuplicate(nums) ? cout << "yes" : cout << "no";
}
