#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,t,x;
    cin >> s >> t >> x;

    bool ans = false;
    if (s < t) {
        if (x >= s && x < t) {
            ans = true;
        }
    } else {
        if (x >= s || x < t) {
            ans = true;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
