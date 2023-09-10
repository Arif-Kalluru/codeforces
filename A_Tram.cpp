#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int passengers = 0, _max = 0, a, b;

  while (n-- > 0) {
    cin >> a >> b;
    passengers += b - a;
    _max = max(passengers, _max);
  }

  cout << _max;

  return 0;
}