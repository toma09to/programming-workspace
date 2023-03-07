#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int taka = 0;
    int aoki = 0;

    for (int i = 1; i <= x; i++) {
        if (i % (a+c) >= 1 && i % (a+c) <= a) taka += b;
        if (i % (d+f) >= 1 && i % (d+f) <= d) aoki += e;
    }

    if (taka > aoki) {
        cout << "Takahashi" << endl;
    } else if (taka < aoki) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}

