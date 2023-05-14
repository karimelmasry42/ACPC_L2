/**
 * Karim Elmasry 2023-05-12
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, sd[2] = {0, 0};
  cin >> n;
  int cards[n];
  for (int &card : cards)
    cin >> card;
  for (int i = 0, j = n - 1, turn = 0; i <= j; turn++) {
    if (cards[i] > cards[j]) {
      sd[turn % 2] += max(cards[i], cards[j]);
      i++;
    } else {
      sd[turn % 2] += max(cards[i], cards[j]);
      j--;
    }
  }
  cout << sd[0] << ' ' << sd[1] << endl;
  return 0;
}