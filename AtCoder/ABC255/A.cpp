#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int r,c,a[2][2];
    cin >> r >> c >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1];

    cout << a[r-1][c-1] << endl;

    return 0;
}
