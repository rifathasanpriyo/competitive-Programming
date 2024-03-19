#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int c1 = a;
        int c2 = 0;
        int c3 = 0;


        if (b > 0) {
            c2 = b / 3;
            b %= 3;
            if (b != 0) {
                int d = 3 - b;
                if (c >= d) {
                    c2++;
                    c -= d;
                } else {
                    c2 = -1;
                }
            }
        }


        if (c > 0) {
            c3 = c / 3;
            if (c % 3 != 0) {
                c3++;
            }
        }

        if (c2 != -1) {
            cout << c1 + c2 + c3 << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
