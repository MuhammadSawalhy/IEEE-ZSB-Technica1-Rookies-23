// submission: https://www.hackerrank.com/challenges/beautiful-triplets/submissions/code/304498167

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    int n, d;
    cin >> n >> d;
    int a[n];
    map<int, int> before, after;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        after[a[i]]++;
    }
    
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        ans += before[a[i] - d] * after[a[i] + d];
        before[a[i]]++;
        after[a[i]]--;
    }
    
    cout << ans << endl;
    
    return 0;
}
