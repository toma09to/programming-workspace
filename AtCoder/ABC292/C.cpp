#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> sum(n+1,0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; i*j <= n; j++) {
            sum[i*j]++;
        }
    }

    long long ans = 0;
    for (int i = 1; i < n; i++) {
        ans += sum[i] * sum[n-i];
    }

    cout << ans << endl;

    return 0;
}
