#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < 6; i++) {
        cout << s[i % s.size()];
    }
    cout << endl;

    return 0;
}
