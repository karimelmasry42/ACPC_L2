// Karim O. Elmasry 2023-05-27
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, a, b, ans, one_three;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if (a < b)
      swap(a, b);
    one_three = min(b, (a - b) / 2);
    ans = one_three + min(b - one_three, a - 3 * one_three) / 2;
    cout << ans << endl;
  }
  return 0;
}
