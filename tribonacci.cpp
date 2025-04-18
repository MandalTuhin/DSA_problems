#include <iostream>
#include <vector>

using namespace std;

vector<int> tribonacci(vector<int> signature, int n) {
  vector<int> result(n);
  if (n > 3) {
    for (int i = 0; i < 3; i++) {
      result[i] = signature[i];
    }
  } else {
    for (int i = 0; i < n; i++) {
      result[i] = signature[i];
    }
  }

  for (int i = 3; i < n; i++) {
    result[i] = result[i - 1] + result[i - 2] + result[i - 3];
  }
  return result;
}

int main() {
  vector<int> signature = {1, 1, 1};
  int n = 10;
  vector<int> result = tribonacci(signature, n);
  for (int elem : result) {
    cout << elem << " ";
  }
  return 0;
}
