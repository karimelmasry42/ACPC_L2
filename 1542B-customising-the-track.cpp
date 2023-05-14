/*
19 Apr 2023
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  long long t, n, a, sum = 0, i, mod;
  cin >> t;
  while (t--) {
    cin >> n;
    i = n;
    sum = 0;
    while (i--) {
      cin >> a;
      sum += a;
    }
    mod = sum % n;
    cout << mod * (n - mod) << endl;
  }
}