// Karim O. Elmasry 2023-06-01
#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> x(3);
  for (int &i : x)
    cin >> i;
  cout << (*max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end()))
       << endl;
  return 0;
}
