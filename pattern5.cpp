#include <iostream>
using namespace std;

void uTriangle(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
}

int main() {
  uTriangle(5);
  return 0;
}
