#include <iostream>
#include <vector>

int sumOfDifferences(const std::vector<int> &arr) {
  std::vector<int> sorted_arr;
  // to copy arr into sorted_arr;
  for (size_t i = 0; i < arr.size(); i++) {
    sorted_arr.push_back(arr[i]);
  }

  int answer = 0;
  // bubble sort
  for (size_t i = 0; i < sorted_arr.size(); i++) {
    for (size_t j = 0; j < sorted_arr.size() - i - 1; j++) {
      if (sorted_arr[j] < sorted_arr[j + 1]) {
        int temp = sorted_arr[j + 1];
        sorted_arr[j + 1] = sorted_arr[j];
        sorted_arr[j] = temp;
      }
    }
  }

  for (int elem : sorted_arr) {
    std::cout << elem << " "; // to print the array;
  }
  for (size_t i = 0; i < sorted_arr.size() - 1; i++) {
    int difference = sorted_arr[i] - sorted_arr[i + 1];
    std::cout << "diff: " << difference << "\n";
    answer += difference;
  }
  return answer;
}

int main() {
  std::vector<int> arr = {-17, 17};
  std::cout << sumOfDifferences(arr);
  return 0;
}
