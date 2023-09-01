// Can be done with counting sort
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> coins(n);
  int sum = 0;

  for (int i = 0; i < n; i++) {
    cin >> coins[i];
    sum += coins[i];
  }

  sort(coins.begin(), coins.end());
  sum = sum / 2 + 1;
  int result = 0;

  for (int i = n-1; i >= 0 && sum > 0; i--) {
    sum -= coins[i];
    result++;
  }

  cout << result;
}