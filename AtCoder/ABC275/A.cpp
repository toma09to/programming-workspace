#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (h[i] > h[ans]) {
            ans = i;
        }
    }

    cout << ans + 1 << endl;

    return 0;
}
