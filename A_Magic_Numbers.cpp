#include <bits/stdc++.h>
using namespace std;

int main()
{
  string num;
  cin >> num;

  bool flag = true;

  for (int i = num.size()-1; i >= 0; ) {
    if (num[i] == '1') {
      i--;
      continue;
    }

    if (i-1 >= 0 && num[i-1] == '1' && num[i] == '4') {
      i -= 2;
      continue;
    }

    if (i-2 >= 0 && num[i-2] == '1' && num[i-1] == '4' && num[i] == '4') {
      i -= 3;
      continue;
    }

    // All other cases
    flag = false;
    break;
  }

  if (flag) cout << "YES";
  else cout << "NO";

  return 0;
}