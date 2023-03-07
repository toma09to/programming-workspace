#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    cout << s[(s.size()-1)/2] << endl;

    return 0;
}
