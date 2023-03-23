#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a, diff = 0;
  cin >> n;
  while (n--) {
    cin >> a;
    diff += (a > 0) ? a : -a;
  }
  cout << diff;
  return 0;
}