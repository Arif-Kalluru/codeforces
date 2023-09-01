#include <iostream>
using namespace std;

int main()
{
  string n1, n2;
  cin >> n1 >> n2;

  for (int i = 0; i < n1.size(); i++) {
    char c = ((n1[i]-'0') ^ (n2[i]-'0')) + '0';
    putchar(c);
  }

  return 0;
}