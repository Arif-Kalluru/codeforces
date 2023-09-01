#include <iostream>

int main()
{
  char c;
  while ((c = getchar()) != '\n') {
    if (c == '.') {
      putchar('0');
      continue;
    }

    c = getchar();
    if (c == '.') {
      putchar('1');
    } else {
      putchar('2');
    }
  }

  return 0;
}