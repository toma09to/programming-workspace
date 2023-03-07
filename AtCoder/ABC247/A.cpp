#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    s.insert(s.begin(), '0');
    s.pop_back();

    cout << s << endl;

    return 0;
}
