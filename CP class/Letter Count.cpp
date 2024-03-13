#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> m;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }

    auto max1 = m.begin();

    for (auto it = m.begin(); it != m.end(); ++it) {
        if (it->second > max1->second) {
            max1 = it;
        }
    }

    cout << max1->first << endl;

    return 0;
}
