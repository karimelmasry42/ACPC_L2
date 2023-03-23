#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  int i, t, n, ans = 0;
  map<int, int> digits_map;
  cin >> t;

  // num of vectors
  while (t--) {
    // get vector
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
      cin >> i;

    // edge case: vector size = 1
    if (n == 1) {
      ans = -1;
      cout << ans;
      continue;
    }

    // edge case: subarray of size = 2
    for (i = 0; i < a.size() - 1; i++)
      if (a[i] == a[i + 1])
        ans = 2;
    if (ans) {
      cout << ans;
      continue;
    }

    // map digits of vector
    for (int i : a)
      digits_map[i]++;
    
    
    // create subarray
    //for (int i: digits_map)
  }
  return 0;
}