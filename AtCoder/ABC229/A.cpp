#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(2);
    for (int i = 0; i < 2; i++) {
        cin >> s[i];
    }

    bool ans = true;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (s[i][j] == '#') {
                if (s[i][(j+1)%2] != '#' && s[(i+1)%2][j] != '#') {
                    ans = false;
                }
            }
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
