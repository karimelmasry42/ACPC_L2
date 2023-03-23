#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, prev_d;
  bool curr_a, curr_b, prev_a, prev_b;
  string b_str;
  cin >> t;
  while (t--) {
    cin >> n >> b_str;

    curr_b = (bool)(b_str[0] - '0');
    curr_a = 1;
    cout << curr_a;

    for (int i = 1; i < n; i++) {
      prev_b = curr_b;
      prev_a = curr_a;
      prev_d = prev_b + prev_a;

      curr_b = (bool)(b_str[i] - '0');
      curr_a = (curr_b + 1 != prev_d);

      cout << curr_a;
    }
    cout << endl;
  }
  return 0;
}