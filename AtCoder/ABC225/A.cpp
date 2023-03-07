#include <bits/stdc++.h>
using namespace std;

int f(int x) {
    int ret = 1;
    for (int i = 2; i <= x; i++) {
        ret *= i;
    }

    return ret;
}

int main() {
    string s;
    cin >> s;

    set<char> st;
    for (int i = 0; i < 3; i++) {
        st.insert(s[i]);
    }

    cout << 6/f(4-st.size()) << endl;
    return 0;
}
