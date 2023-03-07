#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p = (int)(1.08 * n);

    if (p < 206) {
        cout << "Yay!" << endl;
    } else if (p == 206) {
        cout << "so-so" << endl;
    } else {
        cout << ":(" << endl;
    }

    return 0;
}
