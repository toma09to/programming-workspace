#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int x,y,n;
    cin >> x >> y >> n;

    if (x * 3 > y) {
        cout << y * (n/3) + x * (n%3) << endl;
    } else {
        cout << x * n << endl;
    }

    return 0;
}
