#include <iostream>
using namespace std;

int fib(int n){
    if(n == 1 || n == 0) return 1;
    return fib(n-1) + fib (n-2);
}

int main(){
    int n;
    cout<<"Enter the number: "<< endl;
    cin>> n;
    cout<<"The "<< n << "th fibbonacci number is: " << fib(n);
    return 0;
}
