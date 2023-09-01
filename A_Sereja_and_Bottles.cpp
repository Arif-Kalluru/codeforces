#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> brands(1001, -1);

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (brands[a] == -1)
      brands[a] = 0;  // can't open
    if (a != b)
      brands[b] = 1;  // can open
  }

  int count = 0;
  for (int i = 0; i < brands.size(); i++) {
    if (brands[i] == 0)
      count++;
  }

  cout << count;

  return 0;
}