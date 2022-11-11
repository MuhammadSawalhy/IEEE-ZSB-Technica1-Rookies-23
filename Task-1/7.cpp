// Date: 11-11-2022
#include <bits/stdc++.h>

using namespace std;

void first() {
  int n;
  cin >> n;

  int next_power10 = 1;
  while (next_power10 < n) {
    next_power10 *= 10;
  }
  next_power10 /= 10; // the max power of ten exists in n

  int reverse = 0;

  int rev_power10 = 1;
  do {
    reverse += rev_power10 * (n / next_power10 % 10);
    next_power10 /= 10;
    rev_power10 *= 10;
  } while (next_power10);

  cout << reverse << endl;
  cout << (reverse == n ? "YES" : "NO") << endl;
}

void second() {
  string s;
  cin >> s;

  string rev = s;

  while (rev.back() == '0') {
    rev.pop_back();
  }

  if (rev.empty()) {
    rev = "0";
  }

  reverse(rev.begin(), rev.end());
  cout << rev << endl;

  if (rev == s) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  first();
  // second();

  return 0;
}
