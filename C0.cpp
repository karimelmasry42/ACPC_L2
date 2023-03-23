#include <iostream>
#include <stdio.h>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    // get main vect and
    // count repeated digits and
    // store indexes of each digit

    int vect_size, digit, dom, max_count = 0, min_size;
    cin >> vect_size;
    min_size = vect_size;

    // edge case: vector size = 1
    if (vect_size <= 1) {
      cout << -1 << endl;
      continue;
    }
    vector<int> vect(vect_size);           // main vector
    unordered_map<int, int> count;         // counts digit repititions
    unordered_map<int, vector<int> > index; // stores indexes of digit

    for (int i = 0; i < vect_size; i++) {

      // get digit
      cin >> digit;
      vect[i] = digit;

      // count digit repititions
      if (++count[digit] > max_count) {
        dom = digit;
        max_count = count[digit];
      }
      // repeated max = no dominant
      else if (count[digit] == max_count) {
        dom = -1;
      }

      // store index of digit
      index[digit].push_back(i);
    }

    // no dominant
    if (dom == -1) {
      cout << dom << endl;
      continue;
    }

    // find smallest sub-vector
    for (int i = 0; i < max_count - 1; i++) {
      int size = index[dom][i + 1] - index[dom][i];
      if (size < min_size)
        min_size = size;
    }
    cout << min_size << endl;
  }
  return 0;
}