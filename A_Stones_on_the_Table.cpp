#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  char prev = s[0];
  int remove = 0;

  for (int i = 1; i < n; i++) {
    if (s[i] == prev) remove++;
    else prev = s[i];
  }

  cout << remove;
}