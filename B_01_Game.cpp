#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int no = 0;
        for (int i = 1; i < s.size();) {
            if (s[i] != s[i - 1]) {
                no++;
                s.erase(s.begin() + i - 1, s.begin() + i + 1);
                i = max(1, i - 1);
            } else {
                i++;
            }
        }
        if (no % 2 == 0)cout << "NET" << endl;
        else cout << "DA" << endl;
    }
}
