#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] == i+1) {
                sum += a[i];
                break;
            }
        }
    }

    cout << sum << endl;

    return 0;
}
