#include <iostream>
using namespace std;

// void nNumberTriangle(int n) {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n - i; j++) {
//       cout << j + 1 << " ";
//     }
//     cout << "\n";
//   }
// }

void printTraingle(int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n + i; j++){
      if(j >= n - i - 1) {
        cout<< "*";
      } else {
        cout<< " ";
      }
        
    }
    cout<<"\n";
  }
}

int main() {
  int n = 5;
  printTraingle(5);
  return 0;
}
