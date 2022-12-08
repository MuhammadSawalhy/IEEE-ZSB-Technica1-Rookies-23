// submission: https://www.hackerrank.com/challenges/acm-icpc-team/submissions/code/304502347

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<bitset<500>> persons;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        bitset<500> b;
        for (int j = 0; j < m; j++) {
            b.set(j, s[j] == '1');
        }
        persons.push_back(b);
    }
    
    int cnt = 0, max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int my_cnt = (persons[i] | persons[j]).count();
            if (my_cnt > max) {
                max = my_cnt;
                cnt = 1;
            } else if (my_cnt == max) {
                cnt++;
            }
        }
    }
    
    cout << max << endl;
    cout << cnt << endl;
    
    return 0;
}
