/**
 * Karim Elmasry 11-05-2023
 */
#include <bits/stdc++.h>
using namespace std;
bool is_prime(int a) {
  if (a <= 1)
    return false;
  if (a % 2 == 0 || a % 3 == 0)
    return false;
  for (int i = 5; i * i <= a; i += 6) {
    if (a % i == 0)
      return false;
  }
  return true;
}
int main() {
  int n, a, b;
  cin >> n;
  for (b = 4, a = n - b; is_prime(a) || is_prime(b); b++, a--) {
  }
  cout << a << ' ' << b;
  return 0;
}