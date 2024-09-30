#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int sum = a + 2 * b;

        if (sum % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        int target = sum / 2;
        bool possible = false;

        for (int y = 0; y <= b; ++y) {
            int remaining = target - y * 2;
            if (remaining >= 0 && remaining <= a) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
