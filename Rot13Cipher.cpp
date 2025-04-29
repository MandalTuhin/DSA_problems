#include <iostream>
#include <ostream>
#include <string>

std::string rot13(std::string msg) {
  for (std::size_t i = 0; i < msg.size(); i++) {
    if ((msg[i] >= 'a' &&
         msg[i] <= 'z')) { //|| (msg[i] >= 'A' && msg[i] <= 'Z')){
      msg[i] = 'a' + (msg[i] - 'a' + 13) % 26;
    } else if (msg[i] >= 'A' && msg[i] <= 'Z') {
      msg[i] = 'A' + (msg[i] - 'A' + 13) % 26;
    }
  }

  return msg;
}

int main() {
  std::string test;
  std::getline(std::cin, test);
  std::string encoded = rot13(test);
  std::cout << "Encoded: " << encoded << std::endl;
  std::string decoded = rot13(encoded);
  std::cout << "Decoded: " << decoded << std::endl;
  return 0;
}
