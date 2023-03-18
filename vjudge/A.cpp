#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m, price, max = 0;
  cin >> n >> m;
  vector<int> a;
  while (n--) {
    cin >> price;
    a.push_back(price);
  }
  sort(a.begin(), a.end());
  int i = 0;
  while (m--) {
    if (a[i] < 0)
      max -= a[i];
    i++;
  }
  cout << '\n' << max;
  return 0;
}