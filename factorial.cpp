#include <iostream>
#include <vector>
using namespace std;

long long factorial(int n) {
  if (n == 1)
    return 1;
  return n * factorial(n - 1);
}

int main() {
  int number;
  cout << "Enter a Number:" << endl;
  cin >> number;
  cout << "The factorial of " << number << " is: " << factorial(number);
}
