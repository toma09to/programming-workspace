#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n/100 == 7 || (n/10)%10 == 7 || n%10 == 7) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
