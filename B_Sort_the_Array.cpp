#include <iostream>
#include <climits>
using namespace std;

int main()
{
  const int MAX = 1e5 + 1;
  int A[MAX];

  int n;
  cin >> n;

  int prev_of_start = -1, next_of_end = -1;  // value just before decreasing segment & value just after decreasing segment
  int start = -1, end = -1;  // start & end of decreasing segment
  bool increasing = true;
  bool segment = false;  // true if decreasing segment has happened

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < n; i++) {
    if (increasing) {
      // Change in direction
      if (i + 1 < n && A[i] > A[i + 1]) {
        // Already a decreasing segment has happened
        if (segment) {
          cout << "no";
          return 0;
        }

        increasing = false;
        segment = true;  // decreasing segment has occured
        start = i;  // start of decreasing segment
        if (i - 1 >= 0)
          prev_of_start = A[i - 1];  // value preceding the start of decreasing segment
      }
    } else {
      // Change in direction
      if (i + 1 < n && A[i] < A[i + 1]) {
        increasing = true;
        end = i;  // end of decreasing segment
        next_of_end = A[i + 1]; // value succeeding the end of decreasing segment
      }
    }
  }

  // no decreasing segement occured
  if (!segment) {
    cout << "yes\n";
    cout << 1 << " " << 1;
    return 0;
  }

  if (end == -1) {
    end = n - 1;
    next_of_end = INT_MAX;
  }

  if (prev_of_start < A[end] && A[start] < next_of_end) {
    cout << "yes\n";
    cout << start + 1 << " " << end + 1;
  } else {
    cout << "no";
  }

  return 0;
}