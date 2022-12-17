// Submission: https://www.hackerrank.com/challenges/chocolate-feast/submissions/code/305717101
// Date: 17-12-2022
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define all(v) v.begin(), v.end()
#define debug(...)
#ifdef LOCAL
#include "debug.hpp"
#endif

int calc(int n, int m, int wrappers) {
    if (n == 0) return 0;
    return n + calc((wrappers + n) / m, m, (wrappers + n) % m);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, c, m;
        cin >> n >> c >> m;
        cout << calc(n / c, m, 0) << endl;
    }

    return 0;
}
