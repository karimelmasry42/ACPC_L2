#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, ans = 0;
    cin >> n;
    vector<int> x(n);
    for (int &i : x) {
      cin >> i;
    }
    for (int i = 0; i < n - 1; i++) {
      if (x[i] > x[i + 1]) {
        ans += x[i] - x[i + 1];
      }
    }
    cout << ans << '\n';
  }
  return 0;
}