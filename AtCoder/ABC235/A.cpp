#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a = s[0] - '0';
    int b = s[1] - '0';
    int c = s[2] - '0';

    cout << a*100+b*10+c + b*100+c*10+a + c*100+a*10+b << endl;

    return 0;
}
