#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int y;
    cin >> y;

    for (int i = 2002; i < 3003; i += 4) {
        if (i >= y) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
