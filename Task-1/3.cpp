// Date: 11-11-2022
#include <iostream>
#include <vector>

using namespace std;

template <typename T> long long first(const vector<T> &list) {
  long long s = 0;

  for (auto i : list) {
    s += i;
  }

  return s;
}

template <typename T> long long second(const vector<T> &list) {
  long long s = 0;

  int i = 0;
  while (i < (int)list.size()) {
    s += list[i];
    i++;
  }

  return s;
}

template <typename T> long long third(const vector<T> &list, int i = 0) {
  if (i == (int)list.size())
    return 0;

  return list[i] + third(list, i + 1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);

  int n;
  cin >> n;
  vector<int> our_list(n);

  for (auto &i : our_list)
    cin >> i;

  cout << first(our_list) << endl;
  cout << second(our_list) << endl;
  cout << third(our_list) << endl;

  return 0;
}
