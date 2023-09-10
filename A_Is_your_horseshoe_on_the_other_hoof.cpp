#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int count = 0;
  int a[4];
  for (int i = 0; i < 4; i++)
    cin >> a[i];

  sort(a, a + 4);
  for (int i = 1; i < 4; i++) {
    if (a[i] == a[i-1])
      count++;
  }

  cout << count;

  return 0;
}