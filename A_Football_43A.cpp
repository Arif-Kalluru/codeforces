#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  string team; cin >> team;
  int goals = 1;

  for (int i = 1; i < n; i++) {
    string t; cin >> t;
    if (t == team) goals++;
    else goals--;

    if (goals < 0) {
      team = t;
      goals = 1;
    }
  }

  cout << team;

  return 0;
}