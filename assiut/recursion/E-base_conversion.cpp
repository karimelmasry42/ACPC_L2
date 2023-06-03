#include <bits/stdc++.h>
using namespace std;
void bin(int n) {
  if (n <= 1)
    cout << n;
  else {
    bin(n / 2);
    cout << n % 2;
  }
}
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    bin(n);
    cout << endl;
  }
  return 0;
}
