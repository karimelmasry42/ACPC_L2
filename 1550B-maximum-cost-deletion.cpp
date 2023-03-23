#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, a, b;
  string s;
  cin >> t;
  while (t--) {
    cin >> n >> a >> b >> s;
    int d = 0;
    for (int p = 1; p < s.length(); p++)
      d += (s[p] != s[p - 1]);
    int factor = (b >= 0) ? n : (1 + (d + 1) / 2);
    cout << n * a + factor * b << endl;
  }
  return 0;
}