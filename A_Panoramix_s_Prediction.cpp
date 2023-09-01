#include <iostream>
using namespace std;

bool checkPrime(const int& num) {
  for (int i = 3; i < num / 2; i++) {
    if (num % i == 0)
      return false;
  }

  return true;
}

int main()
{
  int n, m;
  cin >> n >> m;

  for (int num = n + 1; num <= m; num++) {
    if (num % 2 == 0) continue;

    if (checkPrime(num)) {
      if (num != m) {
        break;
      } else if (num == m) {
        cout << "YES";
        return 0;
      };
    }
  }

  cout << "NO";

  return 0;
}