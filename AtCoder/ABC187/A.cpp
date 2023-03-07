#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    int sa = a/100 + (a/10)%10 + a%10;
    int sb = b/100 + (b/10)%10 + b%10;

    cout << max(sa,sb) << endl;

    return 0;
}
