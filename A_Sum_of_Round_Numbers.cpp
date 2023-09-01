// Can be done with counting sort
#include <bits/stdc++.h>
using namespace std;
using ld = long double;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> digits;
    int k = 0;
    while (n > 0) {
      int digit = n % 10;
      if (digit != 0) k++;
      digits.emplace_back(n % 10);
      n /= 10;
    }
    cout << k << "\n";
    int place = 1;
    for (int i = 0; i < digits.size(); i++) {
      if (digits[i] != 0) cout << place * digits[i] << " ";
      place *= 10;
    }
    cout << "\n";
  }
}