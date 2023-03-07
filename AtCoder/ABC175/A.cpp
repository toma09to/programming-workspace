#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    int num = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] == 'R') {
            num++;
        } else {
            num = 0;
        }

        if (num > ans) {
            ans = num;
        }
    }

    cout << ans << endl;

    return 0;
}
