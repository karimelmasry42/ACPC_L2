// Karim O. Elmasry 2023-06-01
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, indx;
  cin >> t;
  while (t--) {
    indx = 0;
    cin >> n;
    int a[n];
    int prev_indx[n + 1];
    for (int i = 0; i < n + 1; i++)
      prev_indx[i] = -1;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      indx = max(indx, prev_indx[a[i]] + 1);
      prev_indx[a[i]] = i;
    }
    cout << indx << endl;
  }
  return 0;
}
