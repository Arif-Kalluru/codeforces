#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin >> n;
  vector<int> v(n);

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int num; cin >> num;
    sum += num;
    v[i] = sum;
  }

  int m; cin >> m;
  while (m--) {
    int num; cin >> num;
    cout << lower_bound(v.begin(), v.end(), num) - v.begin() + 1 << "\n";
  }
}