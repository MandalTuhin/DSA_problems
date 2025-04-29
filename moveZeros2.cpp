#include <iostream>
#include <vector>

using namespace std;

// User function template for C++
class Solution {
public:
  void pushZerosToEnd(vector<int> &arr) {
    // I will use two pointers that allow me to swap viarialbes
    int i = 0, j = 1;
    while (j < arr.size()) {
      if (arr[i] == 0 && arr[j] != 0)
        swap(arr[i], arr[j]);
      if (arr[i] == 0 && arr[j] == 0) {
        j++;
        continue;
      }
      i++;
      j++;
    }
  }
};

int main() {
  vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
  Solution solution;
  solution.pushZerosToEnd(arr);
  for (int elem : arr) {
    cout << elem << " ";
  }
  return 0;
}
