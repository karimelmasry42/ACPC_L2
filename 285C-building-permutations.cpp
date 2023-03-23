#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#define ll long long
using namespace std;
int main() {
  ll n, ans = 0;
  cin >> n;
  vector<ll> a(n);
  for (ll &i : a)
    cin >> i;
  sort(a.begin(), a.end());
  for (ll i = 0; i < n; i++)
    ans += llabs(i + 1 - a[i]);
  cout << ans;
}