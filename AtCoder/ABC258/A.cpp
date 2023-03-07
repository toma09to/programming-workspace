#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int k;
    cin >> k;

    cout << 21 + k/60 << ':' << setfill('0') << setw(2) << k % 60 << endl;

    return 0;
}
