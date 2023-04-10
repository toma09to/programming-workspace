#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int b = -1;
    int k = 0;

    bool ans = true;
    for (int i = 0; i < 8; i++) {
        if (s[i] == 'B') {
            if (b == -1) {
                b = i;
            } else if (b%2 == i%2) {
                ans = false;
                break;
            }
        }
        if (s[i] == 'K') {
            k++;
        }
        if (s[i] == 'R' && k != 1) {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
