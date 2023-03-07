#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int n,p,q,r,s;
    cin >> n >> p >> q >> r >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = -1; i < q - p; i++) {
        swap(a[p+i], a[r+i]);
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}
