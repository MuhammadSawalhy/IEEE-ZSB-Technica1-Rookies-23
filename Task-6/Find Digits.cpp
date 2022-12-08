// submission: https://www.hackerrank.com/challenges/find-digits/submissions/code/304495525

#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    int count = 0;
    int N = n;
    while (n) {
        int d = n % 10;
        n /= 10;
        count += d != 0 && N % d == 0;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        int result = findDigits(n);
        fout << result << "\n";
    }

    fout.close();
    return 0;
}
