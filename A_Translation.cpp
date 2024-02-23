#include <bits/stdc++.h>
using namespace std;

int main()
{
  string t, s;
  cin >> t >> s;

  if (t.size() != s.size()) {
    cout << "NO";
    return 0;
  }

  int n = t.size();
  for (int i = 0; i < n; i++) {
    if (t[i] != s[n-1-i]) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}