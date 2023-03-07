#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << setfill('0') << setw(2) << n % 100 << endl;

    return 0;
}
