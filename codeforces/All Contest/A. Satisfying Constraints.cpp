#include<bits/stdc++.h>
using namespace std;

int main() {
    int test, i, k, x, j;
    cin >> test;
    vector<int> v;

    for (i = 0; i < test; i++) {
        int n;
        cin >> n;
        int max_k = 0;
        int mini_k = INT_MAX; // Initialize to maximum possible value

        for (j = 0; j < n; j++) {
            cin >> k >> x;
            if (k == 1) {
                max_k = max(max_k, x);
            } else if (k == 2) {
                mini_k = min(mini_k, x);
            } else {
                v.push_back(x);
            }
        }

        int count = 0;
        for (int p = max_k; p <= mini_k; p++) {
            count++;
        }

        // Exclude values that satisfy type 3 constraints
        for (int value : v) {
            if (value >= max_k && value <= mini_k) {
                count--;
            }
        }

        cout << count << endl;
        v.clear(); // Clear the vector for the next test case
    }

    return 0;
}
