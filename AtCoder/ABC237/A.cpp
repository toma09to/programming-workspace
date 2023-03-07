#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long m = (long long)1 << 31;

    if (n >= -m && n < m) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
