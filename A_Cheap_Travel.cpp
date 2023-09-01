// Can be done with counting sort
#include <bits/stdc++.h>
using namespace std;
using ld = long double;

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  if (m * a < b) {
    cout << n * a;
  } else {
    int cost = (n / m) * b;
    cost += min((n % m) * a, b);
    cout << cost;
  }

}