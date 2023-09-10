#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int first;
  cin >> first;
  int _min = first, _max = first, num, count = 0;

  for (int i = 1; i < n; i++) {
    cin >> num;
    if (num > _max) count++;
    if (num < _min) count++;
    _min = min(_min, num);
    _max = max(_max, num);
  }

  cout << count;

  return 0;
}