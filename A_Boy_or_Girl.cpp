#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int freq[26] = {};
  int distinct = 0;
  for (char& c : s) {
    if (!freq[c-'a']++) distinct++;
  }
  if (distinct % 2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
}