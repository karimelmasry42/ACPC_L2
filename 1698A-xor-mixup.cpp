// Karim O. Elmasry 2023-05-29
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int a[n];
    for (int &i : a)
      cin >> i;
    cout << a[0] << endl;
  }

  return 0;
}
