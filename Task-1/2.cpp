// Date: 11-11-2022
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  // let's suppose that the input number is small
  // no constraints provided 💁‍♂

  int n;
  cin >> n;

  long long factorial = 1;
  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }
  
  cout << factorial << endl;

  return 0;
}
