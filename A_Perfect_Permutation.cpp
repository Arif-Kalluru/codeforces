#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n % 2 == 1) {
    cout << -1;
    return 0;
  }

  for (int i = n; i > 0; i--)
    cout << i << " ";

  return 0;
}