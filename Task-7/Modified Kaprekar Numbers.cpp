// Submission: https://www.hackerrank.com/challenges/kaprekar-numbers/submissions/code/305715781
// Date: 17-12-2022
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define all(v) v.begin(), v.end()
#define debug(...)
#ifdef LOCAL
#include "debug.hpp"
#endif

bool valid(int n) {
    ll sq = (ll)n * n;
    ll s = sq;
    int cnt = 0;
    while (s) {
        cnt++;
        s /= 10;
    }

    cnt = (cnt + 1) / 2;
    ll p = 1;
    while (cnt--)
        p *= 10;

    return n == sq % p + sq / p;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int p, q;
    cin >> p >> q;

    int cnt = 0;
    for (int i = p; i <= q; i++) {
        if (valid(i)) {
            cnt++;
            cout << i << " ";
        }
    }

    if (cnt == 0) {
        cout << "INVALID RANGE";
    }

    cout << endl;

    return 0;
}
