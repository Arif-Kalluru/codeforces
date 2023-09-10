#include <bits/stdc++.h>
using namespace std;

using ll= long long;

int main()
{
  int n;
  cin >> n;

  unordered_map<int, int> M;

  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    M[a] = i;
  }

  int m;
  cin >> m;

  ll count1 = 0, count2 = 0;

  for (int i = 0; i < m; i++) {
    int b;
    cin >> b;

    count1 += M[b];
    count2 += n + 1 - M[b];
  }

  cout << count1 << " " << count2;

  return 0;
}