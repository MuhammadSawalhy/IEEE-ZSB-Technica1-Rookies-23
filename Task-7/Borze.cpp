// Submission: https://codeforces.com/contest/32/submission/181330876

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string s;
    cin >> s;
    string v, one = "-.", zero = ".", zero2 = "..", two = "--";
    for (int i = 0; i < (int)s.size(); i++) {
        if (v.size() == 2) {
            // we should make it 1
            if (v == zero2) {
                cout << "00";
                v = "";
            } else if (v == one) {
                cout << 1;
                v = "";
            } else if (v == ".-") {
                cout << 0;
                v = "-";
            } else {
                assert(v == two);
                cout << 2;
                v = "";
            }
        }
        v.push_back(s[i]);
    }

    // we should make it 1
    if (v == zero) {
        cout << 0;
    } else if (v == zero2) {
        cout << "00";
    } else if (v == one) {
        cout << 1;
    } else {
        assert(v == two);
        cout << 2;
    }

    return 0;
}
