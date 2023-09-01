// Can be done with counting sort
#include <bits/stdc++.h>
using namespace std;

int main() {
  uint64_t count[5] = {};
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    int s; cin >> s;
    count[s]++;
  }

  uint64_t result = count[4] + count[3];
  if (count[1] >= count[3]) count[1] -= count[3];
  else count[1] = 0;
  result += count[2] / 2;
  if (count[2] % 2 == 1) {
    if (count[1] >= 2) count[1] -= 2;
    else count[1] = 0;
    result += 1;
  }
  result += count[1] / 4;
  if (count[1] % 4 > 0) result += 1;
  cout << result;
}