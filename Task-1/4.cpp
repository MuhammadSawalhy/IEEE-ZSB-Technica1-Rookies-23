// Date: 11-11-2022
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  int n;
  cin >> n;
  long long sum = n * (n + 1) / 2;

  cout << sum << endl;

  return 0;
}
