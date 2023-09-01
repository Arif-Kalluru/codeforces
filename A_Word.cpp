#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int countUpper = 0, countLower = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'a') countLower++;
    else countUpper++;
  }

  if (countUpper > countLower) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  } else {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }

  cout << s;

  return 0;
}