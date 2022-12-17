// Submission: https://codeforces.com/contest/275/submission/185615061
// Date: 17-12-2022
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int grid[5][5] = {};

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            int x;
            cin >> x;
            grid[i][j] += x;
            grid[i - 1][j] += x;
            grid[i][j - 1] += x;
            grid[i + 1][j] += x;
            grid[i][j + 1] += x;
        }
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << 1 - grid[i][j] % 2;
            if (j == 3)
                cout << endl;
        }
    }

    return 0;
}
