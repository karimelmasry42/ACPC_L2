#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, k, temp, right, i;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    vector<int> a(n);
    right = n - 1;
    for (int &i : a)
      cin >> i;
    for (int i = 0; i < right; i++)
      if (a[i] >= k) {
        a[i] -= k;
        a[right] += k;
        break;
      } else {
        k -= a[i];
        a[right] += a[i];
        a[i] = 0;
      }
    for (int i : a)
      cout << i << ' ';
    cout << endl;
  }
  return 0;
}