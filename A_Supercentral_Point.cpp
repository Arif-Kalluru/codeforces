#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A[201][2];
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    A[i][0] = x, A[i][1] = y;
  }

  int count = 0;

  for (int i = 0; i < n; i++) {
    int x = A[i][0], y = A[i][1];
    int left = 0, right = 0, up = 0, down = 0;

    for (int j = 0; j < n; j++) {
      int _x = A[j][0], _y = A[j][1];
      if (_x > x && _y == y) {
        right++;
      } else if (_x < x && _y == y) {
        left++;
      } else if (_x == x && _y < y) {
        down++;
      } else if (_x == x && _y > y) {
        up++;
      }

      if (left > 0 && right > 0 && up > 0 && down > 0) {
        count++;
        break;
      }
    }
  }

  cout << count;

  return 0;
}