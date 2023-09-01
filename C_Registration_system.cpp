#include <bits/stdc++.h>

using namespace std;

int main()
{
  unordered_map<string, int> M;

  int n; cin >> n;
  while (n--) {
    string name; cin >> name;
    if (M.find(name) == M.end()) {
      M[name] = 1;
      cout << "OK\n";
    } else {
      name = name + to_string(M[name]++);
      cout << name << "\n";
    }
  }
}