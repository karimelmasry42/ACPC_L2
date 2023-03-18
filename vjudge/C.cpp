#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  int t, n, max_count, x, dom;
  bool repeat;
  cin >> t;
  while (t--) {
    cin >> n;
    vector<int> dom_size;
    map<int, int> count;
    map<int, vector<int> > index;
    max_count = 0;
    for (int i = 0; i < n; i++) {
      cin >> x;
      count[x]++;
      index[x].push_back(i);
      cout << *(index[x].begin()) << ' ';
      if (count[x] > max_count) {
        max_count = count[x];
        dom = x;
        repeat = 0;
      } else if (count[x] == max_count)
        repeat = 1;
    }
    if (repeat) {
      cout << -1 << endl;
      continue;
    }
    cout << endl << "test" << endl;
    for (int i : index[1])
      cout << ' ' << i << ' ';
    for (int i = 0; i < index[dom].size() - 1; i++) {
      cout << endl << "test" << endl;
      dom_size.push_back(index[dom][i + 1] - index[dom][i] + 1);
      cout << endl << "test2" << endl;
    }
    cout << *min_element(dom_size.begin(), dom_size.end()) << endl;
  }
  return 0;
}