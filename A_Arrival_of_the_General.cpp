#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int _max(INT_MIN), _min(INT_MAX), maxIdx, minIdx;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    // closest max
    if (_max < num) {
      _max = num;
      maxIdx = i;
    }
    // farthest min
    if (_min >= num) {
      _min = num;
      minIdx = i;
    }
  }

  if (maxIdx > minIdx)
    cout << maxIdx + (n - 1 - minIdx) - 1;
  else
    cout << maxIdx + (n - 1 - minIdx);

  return 0;
}