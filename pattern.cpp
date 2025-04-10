#include <iostream>
using namespace std;

void nForest(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cout << "* ";
    }
    cout << "\n";
  }
}

int main() {
  nForest(3);
  return 0;
}
