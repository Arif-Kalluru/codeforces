#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int main()
{
  vector<int> A;
  A.reserve(MAX);

  int n; cin >> n;
  while (n--) {
    int x; cin >> x;
    A.emplace_back(x);
  }

  sort(A.begin(), A.end());
  for (int& n : A)
    cout << n << " ";
}