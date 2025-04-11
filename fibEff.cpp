#include <iostream>
#include <vector>
using namespace std;

int fibHelper(int n, vector<int>& memo) {
    if (memo[n] != -1) return memo[n]; // Return the cached result if already computed

    // Compute the Fibonacci number and store it in the memo array
    memo[n] = fibHelper(n - 1, memo) + fibHelper(n - 2, memo);
    return memo[n];
}

int fib(int n) {
    if (n == 0) return 0; // Base case for fib(0)
    if (n == 1) return 1; // Base case for fib(1)

    vector<int> memo(n + 1, -1); // Initialize memoization array with -1
    memo[0] = 0; // Base case for fib(0)
    memo[1] = 1; // Base case for fib(1)

    return fibHelper(n, memo);
}

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    if (n < 0) {
        cout << "Fibonacci sequence is not defined for negative numbers." << endl;
    } else {
        cout << "The " << n << "th Fibonacci number is: " << fib(n) << endl;
    }

    return 0;
}
