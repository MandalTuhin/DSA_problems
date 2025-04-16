#include <iostream>
#include <string>
#include <vector>

using namespace std;

// int reverse(int num, std::string number_string) {
//   if ()
//     ;
//   number_string += num % 10
// }

string square_digit(string number_string) {
  string result;
  for (size_t i = 0; i < number_string.size(); i++) {
    result += number_string[i] * number_string[i];
  }
  return result;
}

int square_digits(string number_string) {
  string number;
  while (num > 0) {
    int temp = num % 10;
    number_string += to_string(temp);
    num /= 10;
  }
  cout << number_string;
  number_string = square_digit(number_string);
  return number_string;
}

int main() {
  int num = 1221;
  cout << square_digits(num);
  return 0;
}
