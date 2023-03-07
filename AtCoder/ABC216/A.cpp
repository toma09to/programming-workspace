#include <bits/stdc++.h>
using namespace std;

int main() {
    double r;
    cin >> r;

    int n = (int)(r * 10) % 10;

    if (n <= 2) {
        cout << (int)r << '-' << endl;
    } else if (n <= 6) {
        cout << (int)r << endl;
    } else {
        cout << (int)r << '+' << endl;
    }

    return 0;
}
