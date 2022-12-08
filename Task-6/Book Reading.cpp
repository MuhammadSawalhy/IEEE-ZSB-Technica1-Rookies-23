// submission: https://codeforces.com/contest/884/submission/184294348

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += 86400 - a;
        if (sum >= t) {
            break;
        }
    }
    cout << i + 1 << endl;
    return 0;
}