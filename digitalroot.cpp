#include<iostream>
using namespace std;

int main() {
    long long n, tong = 0;
    cin >> n;
    do {
        tong = 0;
        while (n > 0) {
            tong += n % 10;
            n /= 10;
        }
        n = tong;
    } while (tong > 9);
    
    cout << tong;
    return 0;
}

