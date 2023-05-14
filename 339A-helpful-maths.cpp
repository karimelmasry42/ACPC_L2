/**
 * Karim Elmasry 2023-05-11
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int int_count = count(s.begin(), s.end(), '+') + 1, num;
  stringstream stream(s);
  multiset<int> nums;
  while (int_count--) {
    stream >> num;
    nums.insert(num);
  }
  cout << *nums.begin();
  nums.erase(nums.begin());
  for (int i : nums)
    cout << '+' << i;
  return 0;
}