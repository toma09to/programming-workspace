#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,a;
    cin >> n >> k >> a;

    cout << (k+a-2)%n + 1 << endl;

    return 0;
}
