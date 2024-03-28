#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool possibleToChoose(const vector<int>& a, const vector<int>& b, int k) {
    unordered_set<int> set_a(a.begin(), a.end());
    unordered_set<int> set_b(b.begin(), b.end());

    for (int i = 1; i <= k; ++i) {
        if (set_a.find(i) == set_a.end() && set_b.find(i) == set_b.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        if (possibleToChoose(a, b, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
