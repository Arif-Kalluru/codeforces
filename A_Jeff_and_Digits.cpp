#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin >> n;

  int fives = 0, zeros = 0;

  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    if (a == 5) fives++;
    else zeros++;
  }

  if (zeros == 0) {
    cout << -1;
    return 0;
  }

  if (fives < 9) {
    cout << 0;
    return 0;
  }

  fives = fives - fives % 9;
  string s = "";
  for (int i = 0; i < fives; i++) {
    s += '5';
  }

  for (int i = 0; i < zeros; i++) {
    s += '0';
  }

  cout << s;

  return 0;
}