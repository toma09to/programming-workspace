#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    long long ans = 1;
    for (int i = 0; i < b; i++) {
        ans *= a;
    }

    cout << ans << endl;

    return 0;
}
