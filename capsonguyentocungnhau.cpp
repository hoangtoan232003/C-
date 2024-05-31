#include <iostream>
#include <algorithm>
using namespace std;

bool nguyenToCungNhau(int a, int b) {
    return __gcd(a, b) == 1;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        for (int j = i + 1; j <= b; ++j) {
            if (nguyenToCungNhau(i, j)) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
    return 0;
}

