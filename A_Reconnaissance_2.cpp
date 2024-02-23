#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> A(n);

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  int minDiff = abs(A[n-1] - A[0]);
  int idx1 = 1, idx2 = n;

  for (int i = 1; i < n; i++) {
    if (abs(A[i] - A[i-1]) < minDiff) {
      minDiff = abs(A[i] - A[i-1]);
      idx1 = i, idx2 = i+1;
    }
  }

  cout << idx1 << " " << idx2;
  return 0;
}