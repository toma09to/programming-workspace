#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t,u;
    int a,b;
    cin >> s >> t >> a >> b >> u;

    if (s == u) {
        a--;
    } else {
        b--;
    }

    cout << a << ' ' << b << endl;

    return 0;
}
