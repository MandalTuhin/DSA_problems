
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  void rotArray(vector<int> &arr, int a, int b) {
    int i = a, j = b - 1;
    while (i < j) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }
  }
  // Function to rotate an array by d elements in counter-clockwise direction.
  void rotateArr(vector<int> &arr, int d) {
    // code here
    // rotate the array 3 times, once till 0 - d then d to n  and then 0 to n;
    rotArray(arr, 0, d);
    for (int elem : arr)
      cout << elem << " ";
    cout << "\n";
    rotArray(arr, d, arr.size());
    for (int elem : arr)
      cout << elem << " ";
    cout << "\n";
    rotArray(arr, 0, arr.size());
    for (int elem : arr)
      cout << elem << " ";
    cout << "\n";
  }
};

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  Solution solution;
  solution.rotateArr(arr, 2);
  for (int elem : arr) {
    cout << elem << " ";
  }
  return 0;
}
