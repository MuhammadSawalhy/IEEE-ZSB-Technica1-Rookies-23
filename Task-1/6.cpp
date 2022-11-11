// Date: 11-11-2022
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  int a, b;
  cin >> a >> b;

  if (a < 1 || b < 1) {
    cerr << "invalid input" << endl;
    return 0;
  }

  // I can implement Euclidean algorithm but I am a little bit lazy
  cout << __gcd(a, b) << endl;

  return 0;
}

