#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int A[7];
  int sum = 0;
  int lastDay;  // last non-zero day

  for (int i = 0; i < 7; i++) {
    cin >> A[i];
    if (A[i] > 0) lastDay = i + 1;
    sum += A[i];
  }

  if (n % sum == 0) {
    cout << lastDay;
    return 0;
  }

  n = n % sum;

  for (int i = 0; i < 7; i++) {
    n -= A[i];
    if (n <= 0) {
      cout << i + 1;
      return 0;
    }
  }

  return 0;
}