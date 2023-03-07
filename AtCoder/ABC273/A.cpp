#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int f(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * f(n-1);
    }
}

int main() {
    int n;
    cin >> n;

    cout << f(n) << endl;

    return 0;
}
