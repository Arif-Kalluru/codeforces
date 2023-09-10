#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;

int main()
{
  ull ab, bc, ca;
  cin >> ab >> bc >> ca;
  ull abc = sqrt(ab * bc * ca);
  ull a = abc / bc;
  ull b = abc / ca;
  ull c = abc / ab;

  cout << 4 * (a + b + c);

  return 0;
}