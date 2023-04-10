#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    cin >> a >> b;

    long long cnt = 0;
    while (true) {
        if (a > b) {
            cnt += a / b;
            a -= cnt * b;
        } else if (a < b) {
            cnt += b / a;
            b -= cnt * a;
        } else {
            break;
        }
    }

    cout << cnt << endl;
    return 0;
}
