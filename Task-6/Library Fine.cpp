// submission: https://www.hackerrank.com/challenges/library-fine/submissions/code/304500424

#include <bits/stdc++.h>

using namespace std;

int main() {
    int d1, m1, y1;
    cin >> d1 >> m1 >> y1;
    int d2, m2, y2;
    cin >> d2 >> m2 >> y2;
    
    if (
      y1 < y2 ||
      y1 == y2 && m1 < m2 ||
      y1 == y2 && m1 == m2 && d1 < d2
    ) {
        cout << 0 << endl;
        return 0;
    }
    
    cout << (
      y2 != y1 ? 10000 :
      m2 != m1 ? (m1 - m2) * 500 :
      /* else */ (d1 - d2) * 15
    ) << endl;
    
    return 0;
}
