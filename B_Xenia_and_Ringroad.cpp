#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int curr = 1;  // start at house 1
  unsigned long long result = 0;

  for (int i = 0; i < m; i++) {
    int a; cin >> a;
    int steps = a - curr;
    if (steps < 0) steps = n + steps;
    result += steps;
    curr = a;
  }

  cout << result;

  return 0;
}