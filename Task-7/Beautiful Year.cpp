// Submission: https://codeforces.com/contest/271/submission/185614458
// Date: 17-12-2022
#include <bits/stdc++.h>

using namespace std;

int d[4];

bool valid (int year) {
    d[0] = year / 1000 % 10;
    d[1] = year / 100 % 10;
    d[2] = year / 10 % 10;
    d[3] = year / 1 % 10;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (d[i] == d[j])
                return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    n++;

    while (!valid(n))
        n++;

    cout << n << endl;

    return 0;
}
