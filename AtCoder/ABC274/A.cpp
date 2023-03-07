#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    double a,b;
    cin >> a >> b;

    cout << fixed << setprecision(3) << b / a << endl; 

    return 0;
}
