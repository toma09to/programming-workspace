#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int ans = 0;
    for (int i = 1; i <= 100; i++) {
        if (i > l1 && i <= r1 && i > l2 && i <= r2) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
