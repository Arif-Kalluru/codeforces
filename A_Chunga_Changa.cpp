// Can be done with counting sort
#include <bits/stdc++.h>
using namespace std;

int main() {
  uint64_t n, m, a;
  cin >> n >> m >> a;

  uint64_t k = (n + m) / a;
  // Worth transfer to get extra cocunut if the spares change after purchasing will be enough to buy another cocunut
  // n % a is spare & m % a is also spare.
  if (n % a + m % a >= a) {
    cout << k << " " << min(a - n % a, a - m % a);
  } else {
    cout << k << " " << 0;
  }
}