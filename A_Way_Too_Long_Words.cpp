#include <bits/stdc++.h>
using namespace std;

int main() {
  short n; cin >> n;
  for (short i = 0; i < n; i++) {
    string word; cin >> word;
    short N = word.size();
    if (N <= 10) {
      cout << word << "\n";
      continue;
    }
    string result = word[0] + to_string(N-2) + word[N-1];
    cout << result << "\n";
  }
}