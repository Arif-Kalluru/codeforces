#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  cout << (n / 2 * m) + ((n % 2) * (m / 2));
}