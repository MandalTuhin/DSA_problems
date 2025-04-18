#include <cmath>
#include <iostream>
using namespace std;

int number_of_digits(int number) {
  int count = 0;
  while (number > 0) {
    count++;
    number /= 10;
  }
  return count;
}

int square_digits(int number) {
  int work_shift = 0;
  int result = 0;
  int temp = number;
  bool flag = false;
  while (number > 0) {
    int temp = number % 10;
    if (temp == 0) {
      flag = true;
    }
    if (flag == true) {
      work_shift = pow(10, number_of_digits(result) + 1);
      flag = false;
    }
    result = result + (temp * temp) * flag ? work_shift
                                           : pow(10, number_of_digits(result));
    cout << result << " ";
    number /= 10;
  }
  if (temp % 10 == 0) {
    result *= 10;
  }
  return result;
}

int main() {
  int number = 8807;
  cout << square_digits(number);
  return 0;
}
