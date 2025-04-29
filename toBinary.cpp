#include <cstdint>
#include <iostream>
#include <string>

std::string add_binary(uint64_t a, uint64_t b) {
  int addition = a + b;
  std::string result = "";
  while (addition) {
    result = std::to_string(addition % 2) + result;
    addition /= 2;
  }
  return result;
}

int main() {
  uint64_t a, b;
  std::cin >> a >> b;
  std::cout << add_binary(a, b);
  return 0;
}
