#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;

    int ans = 0;
    while(x < y) {
        x += 10;
        ans++;
    }

    cout << ans << endl;

    return 0;
}
