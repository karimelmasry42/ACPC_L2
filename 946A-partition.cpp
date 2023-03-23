#include <iostream>
using namespace std;
int main() {
  int n, B = 0, C = 0, a;
  cin >> n;
  while (n--) {
    cin >> a;
    if (a > 0)
      B += a;
    else
      C += a;
  }
  cout << B - C;
  return 0;
}