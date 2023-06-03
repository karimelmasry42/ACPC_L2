#include <bits/stdc++.h>
using namespace std;
bool is_prime(int a) {
  if (a == 2)
    return true;
  if (a % 2 == 0 || a <= 1)
    return false;
  for (int i = a - 1; i >= 3; i--) {
    if (a % i == 0)
      return false;
  }
  return true;
}
int main() {
  while (true) {
    int a;
    cin >> a;
    cout << (-~-a) << endl;
  }
  return 0;
}