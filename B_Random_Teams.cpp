#include <bits/stdc++.h>

using namespace std;

long long calc(long long n)
{
  return n * (n - 1) / 2;
}

int main()
{
  int n, m;
  cin >> n >> m;

  int a = n / m;
  int b = n % m;

  long long _min = (m - b) * calc(a) + b * calc(a + 1);
  long long _max = calc(n - m + 1);

  cout << _min << " " << _max;
}