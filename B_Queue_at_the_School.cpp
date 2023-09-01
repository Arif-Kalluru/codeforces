#include <iostream>
using namespace std;

int main()
{
  int n, t;
  cin >> n >> t;

  string str;
  cin >> str;

  while (t-- > 0) {
    int i = 0;
    while (i < n) {
      if (str[i] == 'B' && i + 1 < n && str[i + 1] == 'G') {
        swap(str[i], str[i + 1]);
        i++;
      }
      i++;
    }
  }

  cout << str;

  return 0;
}