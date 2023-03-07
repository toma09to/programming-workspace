#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;

    char ans = (x-1)/n + 'A';
    cout << (char)((x-1)/n + 'A') << endl;

    return 0;
}
