#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;
    int tmp;
    for (int i = 0; i < 3; i++) {
        cin >> tmp;
        st.insert(tmp);
    }

    if (st.size() == 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
