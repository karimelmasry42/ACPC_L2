#include <iostream>
#include <stdio.h>
#include <vector>
// #include <Python.h>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<int> c(3), a(5);
    int flag = 0;
    for (int &i : c)
      cin >> i;
    for (int &i : a)
      cin >> i;
    vector<int> ogc = c, oga = a;
    // remove strictly-sorted items
    for (int i = 0; i < 3; i++) {
      if (a[i] > c[i]) {
        cout << "NO" << endl;
        for (int i : ogc)
          cout << i << ' ';
        cout << endl;
        for (int i : oga)
          cout << i << ' ';
        cout << endl;
        flag = 1;
      } else {
        c[i] -= a[i];
        a[i] = 0;
      }
    }
    if (flag)
      continue;

    // for last 2 of a and first 3 of c
    // c[0] = 0 if a[3] > c[0] else c[0] - a[3]
    // c[1] = 0 if a[4] > c[0] else c[1] - a[4]
    // //////c[3] -= a[3] + a[4]
    // if c[2] < a[3] + a[4] NO else YES
    for (int i = 0; i < 3; i++)
      if (a[i + 3] > c[i]) {
        a[i + 3] -= c[i];
        c[i] = 0;
      } else {
        c[i] -= a[i + 3];
        a[i + 3] = 0;
      }
    if (c[2] < a[3] + a[4]) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
    for (int i : ogc)
      cout << i << ' ';
    cout << endl;
    for (int i : oga)
      cout << i << ' ';
    cout << endl;
  }
  return 0;
}