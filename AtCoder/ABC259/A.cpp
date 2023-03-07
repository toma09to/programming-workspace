#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n,m,x,t,d;
    cin >> n >> m >> x >> t >> d;

    int ans = t;
    for (int i = n-1; i >= m; i--) {
        if (i < x) {
            ans -= d;
        }
    }

    cout << ans << endl;

    return 0;
}
