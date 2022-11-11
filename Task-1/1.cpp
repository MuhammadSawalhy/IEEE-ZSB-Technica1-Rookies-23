// Date: 11-11-2022
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  long long w, h;
  cin >> w >> h;

  long long area = w * h;
  long long perimeter = (w + h) * 2;

  cout << area << endl;
  cout << perimeter << endl;

  return 0;
}
