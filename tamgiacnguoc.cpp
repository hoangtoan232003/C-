#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = N; i > 0; --i) {
        for(int space = 1; space <= N - i; ++space) {
            cout << "  ";
        }
        for(int j = 1; j <= 2 * i - 1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
