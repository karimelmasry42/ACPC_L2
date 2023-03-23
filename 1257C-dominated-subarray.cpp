#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, a, size, mini;
  cin >> t;
  while (t--) {
    map<int, int> a_map;
    cin >> n;
    mini = n + 1;
    for (int i = 0; i < n; i++) {
      cin >> a;
      if (a_map.count(a))
        mini = min(mini, i - a_map[a] + 1);
      a_map[a] = i;
    }
    if (mini == n + 1)
      cout << -1;
    else
      cout << mini;
    cout << endl;
  }
  return 0;
}