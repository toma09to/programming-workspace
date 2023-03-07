#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    int dif;
    for (dif = 0; dif < 5; dif++) {
        if (a[dif] != a[0]) {
            break;
        }
    }

    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < 5; i++) {
        if (a[i] == a[0]) c1++;
        if (a[i] == a[dif]) c2++;
    }

    if ((c1 == 3 && c2 == 2) || (c1 == 2 && c2 == 3)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
