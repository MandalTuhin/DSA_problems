#include <iostream>
using namespace std;

void nForest(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
}

int main() {
  nForest(5);
  return 0;
}
