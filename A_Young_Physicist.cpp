#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int x = 0, y = 0, z = 0;

  while (n-- > 0) {
    int xi, yi, zi;
    cin >> xi >> yi >> zi;
    x += xi;
    y += yi;
    z += zi;
  }

  if (x == 0 && y == 0 && z == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}