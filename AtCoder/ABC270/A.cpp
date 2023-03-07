#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int ans = 0;
    for (int i = 1; i <= 4; i *= 2) {
       ans += (a % 2 || b % 2) * i;
       a /= 2;
       b /= 2;
    }

    cout << ans << endl;

    return 0;
}
