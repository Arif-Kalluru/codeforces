#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

int main()
{
  ull n, k;
  cin >> n >> k;
  ull odd_numbers = (n % 2 == 1) ? (n / 2 + 1) : (n / 2);

  if (k <= odd_numbers) {
    cout << 2 * k - 1;
  } else {
    k -= odd_numbers;
    cout << 2 * k;
  }

  return 0;
}