#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int sum = 0;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    sum += num;
  }

  int ways = 0;

  for (int digit = 1; digit <= 5; digit++) {
    if ((sum + digit) % (n + 1) != 1)
      ways++;
  }

  cout << ways;

  return 0;
}