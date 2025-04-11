#include <iostream>
#include <vector>
using namespace std;

int fibHelper(int n, vector<int> &memo) {
  if (memo[n] != -1)
    return memo[n];
  memo[n] = fibHelper(n - 1, memo) + fibHelper(n - 2, memo);
  return memo[n];
}

int fib(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  vector<int> memo(n + 1, -1);
  memo[0] = 0;
  memo[1] = 1;

  return fibHelper(n, memo);
}

int main() {
  int n;
  cout << "Enter the value of n: " << endl;
  cin >> n;
  cout << "The " << n << "th fibbonacci Number is: " << fib(n);
}
