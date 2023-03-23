#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  long long ans = 0;
  cin >> n;
  vector<int> a(n);
  for (int &i : a)
    cin >> i;
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++)
    ans += abs(i + 1 - a[i]);
  cout << ans;
}