#include <iostream>
using namespace std;

void nStarDiamond(int n) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n + i; j++){
            j >= n - i - 1 ? cout<< "*" : cout<< " ";
        }
        cout<< "\n";
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            j >= n - i - 1 ? cout<< " " : cout<< "*";
        }
        cout<< "\n";
    }
}

int main(){
    int n = 5;
    nStarDiamond(5);
    return 0;
}