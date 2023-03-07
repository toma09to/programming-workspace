#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a(5);
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < 5; i++) {
        bool dif = true;
        for (int j = 0; j < i; j++) {
            if (a[j] == a[i]) dif = false;
        }

        if (dif) ans++;
    }

    cout << ans << endl;

    return 0;
}
