#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x(3), y(3);
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }

    int ax = x[0];
    int ay = y[0];

    bool flgx, flgy;
    for (int i = 0; i < 3; i++) {
        flgx = true;
        flgy = true;
        for (int j = 0; j < 3; j++) {
            if (i == j) continue;
            if (x[j] == x[i]) flgx = false;
            if (y[j] == y[i]) flgy = false;
        }
        if (flgx) ax = x[i];
        if (flgy) ay = y[i];
    }

    cout << ax << ' ' << ay << endl;

    return 0;
}
