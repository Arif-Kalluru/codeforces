#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n; scanf("%d", &n);

  // oddIdx stores last seen odd element
  // evenIdx stores last seen even element
  int i, oddIdx = -1, evenIdx = -1, noOfOdd = 0, noOfEven = 0;

  for (i = 1; i <= n; i++) {
    int num; scanf("%d", &num);
    if (num % 2 == 0) {
      evenIdx = i;
      noOfEven++;
    } else {
      oddIdx = i;
      noOfOdd++;
    }
  }

  if (noOfOdd == 1) printf("%d", oddIdx);
  else printf("%d", evenIdx);
}