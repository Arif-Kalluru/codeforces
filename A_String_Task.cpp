#include <bits/stdc++.h>
using namespace std;

int main()
{
  unordered_set<char> vowels = {'a', 'e', 'i', 'y', 'o', 'u'};
  string s;
  cin >> s;

  string result = "";
  for (int i = 0; i < s.size(); i++) {
    char c = tolower(s[i]);
    if (vowels.count(c)) continue;
    result += string(1, '.') + string(1, c);
  }
  cout << result;
}