#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w - 1; j++) {
            if (s[i][j] == 'T' && s[i][j+1] == 'T') {
                s[i][j] = 'P';
                s[i][j+1] = 'C';
            }
        }
    }

    for (int i = 0; i < h; i++) {
        cout << s[i] << endl;
    }

    return 0;
}
