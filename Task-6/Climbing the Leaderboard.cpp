// Submission:
// https://www.hackerrank.com/challenges/climbing-the-leaderboard/submissions/code/304741363
// Date: 09-12-2022

#include <bits/stdc++.h>

using namespace std;

#define debug(...)
#define ll long long
#define all(v) v.begin(), v.end()
#ifdef LOCAL
#include "debug.hpp"
#endif

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> ranked;
  for (int i = 0; i < n; i++) {
    int r;
    cin >> r;
    if (ranked.empty() || ranked.back() != r)
      ranked.push_back(r);
  }

  int m;
  cin >> m;
  int player;
  for (int i = 0; i < m; i++) {
    cin >> player;
    /* let's search for its position */
    int j = lower_bound(all(ranked), player, greater<>()) - ranked.begin();
    cout << j + 1 << endl;
  }

  return 0;
}
