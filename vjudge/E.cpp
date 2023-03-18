#include <iostream>
#include <vector>
using namespace std;
int main() {
  int t, n, k, temp, right, i;
  cin >> t;
  while (t--) {
    vector<int> a;
    cin >> n >> k;
    right = n - 1;
    i = n;
    while (i--) {
      cin >> temp;
      a.push_back(temp);
    }
    for (int i = 0; i < right; i++)
      if (a[i] >= k) {
        a[i] -= k;
        a[right] += k;
        break;
      } else {
        k -= a[i];
        a[right] += a[i];
        a[i] = 0;
      }
    for (int i : a)
      cout << i << ' ';
    cout << endl;
  }
  return 0;
}