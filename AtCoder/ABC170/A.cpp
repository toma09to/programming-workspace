#include <bits/stdc++.h>
using namespace std;

int main() {
    int tmp,sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> tmp;
        sum += tmp;
    }

    cout << 15 - sum << endl;

    return 0;
}
