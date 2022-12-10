// Submission:
// https://www.hackerrank.com/challenges/hackerrank-in-a-string/submissions/code/304741638
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

    string hrnk = "hackerrank";

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int j = 0;
        for (char c : s) {
            if (j < hrnk.size() && c == hrnk[j])
                j++;
        }

        cout << (j == hrnk.size() ? "YES" : "NO") << endl;
    }

    return 0;
}
