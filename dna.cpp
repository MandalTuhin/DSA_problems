#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include <string>

string DNAStrand(const string &dna) {
  string dnaResult = dna;
  for (size_t i = 0; i < dna.size(); i++) {
    if (dna[i] == 'A') {
      dnaResult[i] = 'T';
    } else if (dna[i] == 'C') {
      dnaResult[i] = 'G';

    } else if (dna[i] == 'T') {
      dnaResult[i] = 'A';

    } else if (dna[i] == 'G') {
      dnaResult[i] = 'C';
    } else {
      //       dnaResult[i] = dna[i];
    }
  }
  return dnaResult;
}

int main() {
  string dna = "AAAA";
  cout << DNAStrand(dna);
  return 0;
}
