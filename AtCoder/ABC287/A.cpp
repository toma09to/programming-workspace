#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int agree = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == "For") {
            agree++;
        }
    }

    if (agree > n / 2.0) {
        cout << "Yes" << endl;
    } else  {
        cout << "No" << endl;
    }

    return 0;
}
