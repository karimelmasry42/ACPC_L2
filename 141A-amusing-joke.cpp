// Karim O. Elmasry 2023-05-29
#include <bits/stdc++.h>
using namespace std;
int main() {
  string guest, host, pile;
  int og_letters[26] = {0}, pile_letters[26] = {0};
  cin >> guest >> host >> pile;
  for (char c : guest)
    og_letters[c - 'A']++;
  for (char c : host)
    og_letters[c - 'A']++;
  for (char c : pile)
    pile_letters[c - 'A']++;
  int i;
  for (i = 0; i < 26; i++)
    if (pile_letters[i] != og_letters[i]) {
      cout << "NO" << endl;
      break;
    }
  if (i == 26)
    cout << "YES" << endl;
  return 0;
}
