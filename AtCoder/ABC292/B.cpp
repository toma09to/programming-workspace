#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin >> n >> q;

    vector<int> a(n, 0);
    int c,x;

    for (int i = 0; i < q; i++) {
        cin >> c >> x;
        if (c == 1) {
            a[x-1]++;
        } else if (c == 2) {
            a[x-1] += 2;
        } else {
            if (a[x-1] >= 2) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
