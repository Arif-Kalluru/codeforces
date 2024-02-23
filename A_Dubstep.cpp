#include <bits/stdc++.h>
using namespace std;

vector<string> split(string& s, string& delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

int main() {
    string str; cin >> str;
    string delimiter = "WUB";
    vector<string> v = split(str, delimiter);

    string result;
    for (auto s : v) {
        if (s.size() != 0)
            result += s + " ";
    }

    cout << result;
    return 0;
}