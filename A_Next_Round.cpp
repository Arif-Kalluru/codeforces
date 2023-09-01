#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, n, result = 0;
  cin >> n >> k;

  int minScore = 1;

  for (int i = 1; i <= n; i++) {
    int score; cin >> score;
    if (score < minScore) break;
    result++;
    if (i == k) minScore = score;
  }

  cout << result;
}