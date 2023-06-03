// Karim O. Elmasry 2023-05-29
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int b[n];
    for (int &i : b)
      cin >> i;
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--)
      cout << b[i] << " " << b[j] << " ";

    if (i == j)
      cout << b[i];
    cout << endl;
  }
  return 0;
}
