#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;
    cin >> x;

    int ans = x * 10;
    if (ans % 10 >= 5) {
        ans /= 10;
        ans++;
    } else {
        ans /= 10;
    }

    cout << ans << endl;
    return 0;
}
