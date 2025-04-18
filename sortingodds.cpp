#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Kata {
public:
  vector<int> sortArray(vector<int> array) {
    vector<int> odds;                // odds array to store odd numbers
    unordered_set<int> indicesOfOdd; // uset to store the indices of odd numbers
    for (int i = 0; i < array.size(); i++) {
      if (array[i] % 2 != 0) {
        odds.push_back(array[i]);
        indicesOfOdd.insert(i);
      } else {
        continue;
      }
    }
    for (int elem : odds) {
      cout << elem << " ";
    }
    cout << "\n";

    // sorting the odds array
    // I am implementing a sort;
    for (int i = 0; i <= odds.size(); i++) {
      for (int j = 0; j < odds.size() - 1; j++) {
        if (odds[j] > odds[j + 1]) {
          // swap the values
          int temp = odds[j];
          odds[j] = odds[j + 1];
          odds[j + 1] = temp;
        }
      }
    }
    for (int elem : odds) {
      cout << elem << " ";
    }
    int counter = 0;
    for (int i = 0; i < array.size(); i++) {
      if (indicesOfOdd.count(i)) {
        array[i] = odds[counter];
        counter++;
      } else {
        continue;
      }
    }

    return array;
  }
};

int main() {
  vector<int> array = {5, 3, 2, 8, 1, 4};
  Kata k;
  vector<int> result = k.sortArray(array);
  cout << "\n";
  for (int elem : result) {
    cout << elem << " ";
  }

  return 0;
}
