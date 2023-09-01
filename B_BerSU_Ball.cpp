// Can be done with counting sort
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int boys[101] = {}, girls[101] = {};

  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    boys[x]++;
  }

  int m; cin >> m;

  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    girls[x]++;
  }

  int pairs = 0;
  for (int i = 1; i <= 100; i++) {
    // any previous matching
    if (i > 1) {
      int ans = min(boys[i], girls[i-1]);
      pairs += ans;
      boys[i] = max(boys[i] - ans, 0);
      girls[i - 1] = max(girls[i - 1] - ans, 0);
    }

    // any current matching
    int ans = min(boys[i], girls[i]);
    pairs += ans;
    boys[i] = max(boys[i] - ans, 0);
    girls[i] = max(girls[i] - ans, 0);

    // any next matching
    if (i < 100) {
      int ans = min(boys[i], girls[i+1]);
      pairs += ans;
      boys[i] = max(boys[i] - ans, 0);
      girls[i + 1] = max(girls[i + 1] - ans, 0);
    }
  }

  cout << pairs;
}