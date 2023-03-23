#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, max = 0;
  cin >> n >> m;
  vector<int> a(n);
  for (int &i : a)
    cin >> i;
  sort(a.begin(), a.end());
  for (int i = 0; i < m; i++)
    max -= (a[i] < 0) ? a[i] : 0;
  cout << max << endl;
  return 0;
}