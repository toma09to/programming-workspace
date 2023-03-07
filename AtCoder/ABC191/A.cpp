#include <bits/stdc++.h>
using namespace std;

int main() {
    int v,t,s,d;
    cin >> v >> t >> s >> d;

    if (d < v * t || d > v * s) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
