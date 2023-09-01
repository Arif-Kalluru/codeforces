#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int N = s.size();
  vector<int> nums(N/2 + 1);

  for (int i = 0; i < N; i++) {
    if (s[i] != '+')
      nums[i/2] = s[i]-'0';
  }

  sort(nums.begin(), nums.end());

  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) s[i] = nums[i/2] + '0';
    else s[i] = '+';
  }

  cout << s;
}