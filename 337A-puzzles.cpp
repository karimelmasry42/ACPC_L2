#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, ans = 1000;
  cin >> n >> m;
  vector<int> f(m);
  for (int &i : f)
    cin >> i;
  sort(f.begin(), f.end());
  for (int i = n; i <= m; i++)
    ans = min(ans, f[i - 1] - f[i - n]);
  cout << ans << endl;
  return 0;
}