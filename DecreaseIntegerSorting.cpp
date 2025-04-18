#include <cinttypes>
#include <cmath>
#include <iostream>
#include <vector>

uint64_t descendingOrder(uint64_t a) {
  std::vector<int> number;
  while (a > 0) {
    number.push_back(a % 10);
    a /= 10;
  }

  // sorting logic
  for (size_t i = 0; i < number.size(); i++) {
    for (size_t j = 0; j < number.size() - i - 1; j++) {
      if (number[j] < number[j + 1]) {
        int temp = number[j];
        number[j] = number[j + 1];
        number[j + 1] = temp;
      }
    }
  }

  // converting the vector back to a number
  int result = 0;
  for (size_t i = 0; i < number.size(); i++) {
    result += number[i] * pow(10, number.size() - i - 1);
  }
  return result;
}

int main() {
  int number = 6666555333222221111;
  std::cout << descendingOrder(number);
  return 0;
}
