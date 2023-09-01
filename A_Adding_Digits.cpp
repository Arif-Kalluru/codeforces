// First try to add to the right one digit from 0 to 9.
// If it is impossible write -1.
// The remaining n–1 digits can be 0 because divisibility doesn’t change.
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int a, b, n;
  cin >> a >> b >> n;

  bool flag = false;
  for (int digit = 0; digit <= 9; digit++) {
    if ((a * 10 + digit) % b == 0) {
      cout << a * 10 + digit;
      string s(n-1, '0');
      cout  << s;
      flag = true;
      break;
    }
  }

  if (!flag) cout << -1;

  return 0;
}