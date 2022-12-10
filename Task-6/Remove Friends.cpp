// Submission: https://www.hackerearth.com/submission/78164569/
// Date: 09-12-2022

#include <bits/stdc++.h>

using namespace std;

#define debug(...)
#define ll long long
#define all(v) v.begin(), v.end()
#ifdef LOCAL
#include "debug.hpp"
#endif

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> friends;
    for (int i = 0; i < n; i++) {
        int f;
        cin >> f;
        debug(k);
        while (k && !friends.empty() && friends.back() < f)
            friends.pop_back(), k--;
        friends.push_back(f);
    }

    for (int i = 0; i < (int)friends.size() - k; i++)
        cout << friends[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
