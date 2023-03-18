#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
  vector<int> x(5);
  for (int &i : x)
    cin >> i;
  for (int i : x)
    cout << i;
  return 0;
}