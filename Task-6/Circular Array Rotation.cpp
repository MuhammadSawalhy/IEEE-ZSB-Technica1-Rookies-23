// Submission:
// https://www.hackerrank.com/challenges/circular-array-rotation/submissions/code/304816735
// Date: 10-12-2022

#include <bits/stdc++.h>

using namespace std;

#define debug(...)
#define ll long long
#define all(v) v.begin(), v.end()
#ifdef LOCAL
#include "debug.hpp"
#endif

void solve() {
    int n, k, q;
    cin >> n >> k >> q;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int r[n];
    for (int i = 0; i < n; i++) {
        r[(i + k) % n] = a[i];
    }

    while (q--) {
        int i;
        cin >> i;
        cout << r[i] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    solve();

    return 0;
}
