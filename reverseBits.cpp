#include <iostream>

using namespace std;

int reverseBits(int num) {
  int reverse = 0;
  while (num > 0) {
    int temp = num & 1;
    // cout << temp << " ";
    reverse = (reverse << 1) | temp;
    cout << reverse << " ";
    num >>= 1;
  }
  return reverse;
}

int main() {
  int num = 13;
  cout << reverseBits(num);
}
