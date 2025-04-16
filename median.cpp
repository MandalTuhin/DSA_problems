#include <iostream>
#include <vector>
using namespace std;

int find_even_index(const vector<int> &numbers) {
  // bruteforce
  // int left_sum = 0, right_sum = 0;
  for (size_t i = 0; i < numbers.size(); i++) {
    // taking the zeroth index as the answer;
    int left_sum = 0, right_sum = 0;
    for (size_t j = 0; j < i; j++) {

      left_sum += numbers[j];
    }
    for (size_t k = i + 1; k < numbers.size(); k++) {
      right_sum += numbers[k];
    }
    if (left_sum == right_sum)
      return i;
  }

  return -1;
}

int main() {
  vector<int> numbers = {1, 2, 3, 4, 3, 2, 1};
  cout << " the mid-point of the array is at index:"
       << find_even_index(numbers);
  return 0;
}
