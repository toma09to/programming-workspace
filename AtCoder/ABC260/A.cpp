#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool exist = false;
    bool same;
    for (int i = 0; i < 3; i++) {
        same = false;
        for (int j = 0; j < 3; j++) {
            if (i == j) continue;
            if (s[i] == s[j]) same = true;
        }

        if (!same) {
            cout << s[i] << endl;
            exist = true;
            break;
        }
    }

    if (!exist) cout << -1 << endl;

    return 0;
}
