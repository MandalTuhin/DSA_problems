#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiplication_table(int n) {
  vector<vector<int>> table(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      table[i][j] = (i + 1) * (j + 1);
    }
  }
  return table;
}

int main() {
  int n;
  cout << "Enter a value for n: ";
  cin >> n;
  vector<vector<int>> result = multiplication_table(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << result[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
