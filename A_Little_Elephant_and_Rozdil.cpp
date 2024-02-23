#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int _min = INT_MAX, city, minCount = 0;

  for (int i = 1; i <= n; i++) {
    int t; cin >> t;

    if (t < _min) {
      _min = t;
      city = i;
      minCount = 1;
    } else if (t == _min) {
      minCount++;
    }
  }

  if (minCount > 1) {
    cout << "Still Rozdil";
  } else {
    cout << city;
  }

  return 0;
}