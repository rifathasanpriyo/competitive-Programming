#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

long long max_fireworks(long long a, long long b, long long m) {
    long long lcm_freq = lcm(a, b);
    long long intervals = lcm_freq / a + lcm_freq / b;
    long long duration = m + 1;
    return intervals * duration;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, m;
        cin >> a >> b >> m;
        cout << max_fireworks(a, b, m) << endl;
    }

    return 0;
}
