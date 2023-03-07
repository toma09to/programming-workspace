#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 42) n++;

    cout << "AGC" << setfill('0') << setw(3) << n << endl;

    return 0;
}
