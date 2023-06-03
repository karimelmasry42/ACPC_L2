// Karim O. Elmasry 2023-05-29
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    vector<int> s(n);
    for (int &i : s)
      cin >> i;
    multiset<int> s_set(s.begin(), s.end());
    for (int i : s) {
      auto it = s_set.rbegin();
      if (i == *it)
        cout << i - *(++it) << " ";
      else
        cout << i - *it << " ";
    }
    cout << endl;
  }
  return 0;
}
