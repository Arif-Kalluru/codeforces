#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int A = k * l / nl;
  int B = c * d;
  int C = p / np;

  cout << min({A, B, C}) / n;
  return 0;
}