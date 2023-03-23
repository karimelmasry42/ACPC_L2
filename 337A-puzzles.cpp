#include <iostream>
#include <vector>
using namespace std;
int main() {
  int i, n, m, x, ans = 1000;
  cin >> n >> m;
  vector<int> f(m);
  i = m;
  while (i--)
    scanf("%d", &f[i]);
  sort(f.begin(), f.end());
  for (i = n; i <= m; i++)
    ans = min(ans, f[i - 1] - f[i - n]);
  cout << '\n' << ans;
  return 0;
}