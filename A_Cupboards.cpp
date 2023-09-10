#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int lCount = 0, rCount = 0; // number of closed left doors & closed right doors

  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    if (l == 1 ) lCount++;
    if (r == 1) rCount++;
  }

  int count = min(lCount, n - lCount) + min(rCount, n - rCount);
  cout << count;

  return 0;
}