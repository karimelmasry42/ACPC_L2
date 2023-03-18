#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int t, n, prev_d;
  bool curr_a, curr_b, prev_a, prev_b;
  string b_str;

  cin >> t;

  while (t--) {
    vector<bool> b_vect;

    cin >> n;
    cin >> b_str;

    for (char digit : b_str)
      b_vect.push_back(bool(digit - '0'));

    cin >> curr_b;
    curr_a = 1;
    cout << curr_a;

    for (int i = 1; i < n; i++) {
      prev_b = curr_b;
      prev_a = curr_a;
      prev_d = prev_b + prev_a;

      cin >> curr_b;
      curr_a = (curr_b + 1 != prev_d);

      cout << curr_a;
    }
    cout << endl;
  }
  return 0;
}