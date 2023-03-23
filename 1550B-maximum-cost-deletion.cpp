#include <iostream>
#include <string>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;`
    int d(0);
    for (int p = 1; p < s.size(); p++)
      d += (s[p] != s[p - 1]);
    int factor = (b >= 0) ? n : (1 + (d + 1) / 2);
    printf("%ld\n", n * a + factor * b);
  }
  return 0;
}