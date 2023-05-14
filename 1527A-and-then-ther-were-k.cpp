#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  int n, k, prev_k;
  cin >> t;
  while (t--) {
    cin >> n;
    if (n == 1) {
      cout << 0 << endl;
      continue;
    }
    for (k = 1; k < n; prev_k = k, k = k * 2 + 1) {
    }
    cout << prev_k << endl;
  }
  return 0;
}