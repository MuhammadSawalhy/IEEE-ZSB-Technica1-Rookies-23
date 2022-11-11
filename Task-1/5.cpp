// Date: 11-11-2022
#include <iostream>

using namespace std;

long long calc(int n) {
  return 1LL * n * (n + 1) / 2;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  int n;
  cin >> n;

  // multiples of 3 or 5 only to include
  long long sum = 0;

  // see how many of them we can get
  // multiples of 3
  // 3 ... 6 ... 9 ... 12 ... etc

  sum += calc(n / 3) * 3;

  // see how many of them we can get
  // multiples of 3
  // 5 ... 10 ... 15 ... 20 ... etc

  sum += calc(n / 5) * 5;

  // no remove duplications
  // multiples of 3 and 5, in other words multiples of 3*5
  // 15 ... 30 ... 45 ... 60 ... etc

  sum -= calc(n / 15) * 15;

  cout << sum << endl;

  return 0;
}
