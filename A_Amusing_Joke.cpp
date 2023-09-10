#include <iostream>
#include <vector>
using namespace std;

int main()
{
  string s1, s2, s3;
  vector<int> freq1(26, 0), freq2(26, 0);
  cin >> s1 >> s2 >> s3;

  for (char& c : s1)
    freq1[c-'A']++;
  for (char& c : s2)
    freq1[c-'A']++;
  for (char& c : s3)
    freq2[c-'A']++;

  if (freq1 == freq2) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
