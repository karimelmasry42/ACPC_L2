// Karim O. Elmasry 2023-06-01
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x, y;
  cin >> n >> x;
  int indx[n + 1] = {0}, X[x];
  for (int &i : X) {
    cin >> i;
    indx[i] = 1;
  }
  cin >> y;
  int Y[y];
  for (int &i : Y) {
    cin >> i;
    indx[i] = 1;
  }
  if (accumulate(indx, indx + n + 1, 0) == n)
    cout << "I become the guy.\n";
  else
    cout << "Oh, my keyboard!\n";
  return 0;
}
