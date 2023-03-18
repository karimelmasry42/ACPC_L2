#include <cmath>
#include <iostream>
#define ll long long
using namespace std;
int main() {
  ll a, copy, len;
  cin >> a;
  for (len = 1, copy = a; copy; len++, copy /= 10) {
  }
  while (--len)
    if (!(((int)(a / pow(10, len - 1))) % 10)) {
      a = (a - a % (int)pow(10, len)) / 10 + (a % (int)pow(10, len - 1));
      cout << a;
      exit(0);
    }
  cout << a / 10;
  return 0;
}