// Can be done with counting sort
#include <bits/stdc++.h>
using namespace std;
using ld = long double;

int main() {
  int t; cin >> t;
  for (int i = 0; i < t; i++) {
    int n; int k;
    cin >> n >> k;
    if (k < n) cout << k << "\n";
    else {
      int result = n * (k / (n-1));
      if (k % (n-1) == 0) result--;
      else result += k % (n-1);
      cout << result << "\n";
    }
  }
}