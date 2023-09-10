#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  queue<pair<int, int>> Q;

  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    if (a - m > 0) Q.emplace(i, a - m);
  }

  int last = n;

  while (!Q.empty()) {
    int idx = Q.front().first;
    int count = Q.front().second;
    Q.pop();
    if (count - m > 0) Q.emplace(idx, count - m);
    last = idx;
  }

  cout << last;

  return 0;
}