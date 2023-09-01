// Can be done with counting sort
#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned int n, m, a;
  cin >> n >> m >> a;
  uint64_t row = n / a, col = m / a;
  if (n % a) row += 1;
  if (m % a) col += 1;
  cout << row * col;
}