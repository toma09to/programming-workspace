#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int k;
    cin >> k;

    char c = 'A';
    for (int i = 0; i < k; i++) {
        cout << c;
        c++;
    }
    cout << endl;

    return 0;
}
