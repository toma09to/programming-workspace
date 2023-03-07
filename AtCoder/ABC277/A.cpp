#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++) {
        if (p[i] == x) {
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}
