class Solution {
public:
  long long calculateScore(vector<string> &instructions, vector<int> &values) {
    long long score = 0;
    unordered_set<int> visited; // will use to store visited indices
    for (size_t i = 0; i < instructions.size(); i++) {
      if (visited.count(i))
        break;
      if (instructions[i] == "add") {
        score += values[i];
      } else if (instructions[i] == "jump") {
        i += values[i];
      }
      visited.insert(i);
    }
    return score;
  }
};
