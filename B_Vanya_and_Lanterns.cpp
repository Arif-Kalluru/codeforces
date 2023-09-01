// Can be done with counting sort
#include <bits/stdc++.h>
using namespace std;
using ld = long double;

int main() {
  int n, l;
  cin >> n >> l;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  ld d = 2 * max(a[0], l-a[n-1]);
  for (int i = 0; i < n-1; i++) {
    d = max(d, (ld)a[i+1]-a[i]);
  }
  printf("%.10Lf", d / 2.0);
}