#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,x;
    cin >> a >> b >> c >> x;

    if (x <= a) {
        cout << 1.0 << endl;
    } else if (x <= b) {
        cout << (double)c / (b-a) << endl;
    } else {
        cout << 0.0 << endl;
    }

    return 0;
}
