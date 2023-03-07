#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    int n = 0;
    while (n <= x) {
        n += 100;
    }

    cout << n - x << endl;

    return 0;
}
