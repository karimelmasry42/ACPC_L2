#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, c1, c2, c3, a1, a2, a3, a4, a5;
  cin >> t;
  while (t--) {
    cin >> c1 >> c2 >> c3;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    c1 -= a1;
    c2 -= a2;
    c3 -= a3;
    if (c1 < 0 || c2 < 0 || c3 < 0) {
      cout << "NO" << endl;
      continue;
    }
    a4 -= c1;
    a5 -= c2;
    c3 -= (a4 > 0) ? a4 : 0;
    c3 -= (a5 > 0) ? a5 : 0;
    if (c3 < 0)
      cout << "NO";
    else
      cout << "YES";
    cout << endl;
  }
  return 0;
}