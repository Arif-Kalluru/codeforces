#include <bits/stdc++.h>
using namespace std;

int main() {
  short n; cin >> n;
  int result = 0;

  for (short i = 0; i < n; i++) {
    short a, b, c;
    cin >> a >> b >> c;
    if (a + b + c >= 2)
      result++;
  }

  cout << result;
}