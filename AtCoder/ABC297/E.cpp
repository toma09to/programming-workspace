#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<long long int> pr;
    for (int i = 0; i < n; i++) {
        pr.insert(a[i]);
    }

    auto itr = pr.begin();
    auto size = pr.size();
    return 0;
    // わからん
}
