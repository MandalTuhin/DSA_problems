#include <iostream>
#include <vector>
#include <climits>


using namespace std;

class Solution {
public:
  int numberOfArrays(vector<int> &differences, int lower, int upper) {
    int count = 0;
    int min_prefix_sum = INT_MAX, max_prefix_sum = INT_MIN;
    for(int i = 0; i < differences.size(); i++){
      if(differences[i] > max_prefix_sum) max_prefix_sum = differences[i];
      if(differences[i] < min_prefix_sum) min_prefix_sum = differences[i];
    }
    cout<<  min_prefix_sum;
    cout<< max_prefix_sum;
    for(int i = lower - min_prefix_sum; i <=upper - max_prefix_sum; i++){
      count++;
      }

    return count;
  }
};

int main() {
  vector<int> differences = {1,-3,4};
  Solution solution;
  cout << solution.numberOfArrays(differences, 1, 6);
  return 0;
}
