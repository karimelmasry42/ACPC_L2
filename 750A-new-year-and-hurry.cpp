/**
 * Karim Elmasry 2023-05-06
Limak is going to participate in a contest on the last day of the 2016. The
contest will start at 20:00 and will last four hours, exactly until midnight.
There will be n problems, sorted by difficulty, i.e. problem 1 is the easiest
and problem n is the hardest. Limak knows it will take him 5·i minutes to solve
the i-th problem.

Limak's friends organize a New Year's Eve party and Limak wants to be there at
midnight or earlier. He needs k minutes to get there from his house, where he
will participate in the contest first.

How many problems can Limak solve if he wants to make it to the party?

Input
The only line of the input contains two integers n and k (1 ≤ n ≤ 10,
1 ≤ k ≤ 240) — the number of the problems in the contest and the number of
minutes Limak needs to get to the party from his house.

Output
Print one integer, denoting the maximum possible number of problems Limak can
solve so that he could get to the party at midnight or earlier.


*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  const int MAX_MINS = 240;
  int n, k;
  cin >> n >> k;
  if (k > MAX_MINS - 5) {
    cout << 0;
    exit(0);
  }
  float c = 2.0 / 5.0 * k - 96;
  int probs = (sqrt(1 - 4 * c) - 1) / 2;
  if (probs > n)
    probs = n;
  cout << probs;
  return 0;
}