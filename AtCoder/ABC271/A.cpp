#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>
using namespace std;

int main() {
    char num[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int n;
    cin >> n;

    cout << num[n/16] << num[n%16] << endl; 

    return 0;
}
