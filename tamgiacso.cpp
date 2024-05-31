#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; ++i) {
        for(int space = 1; space <= N - i; ++space) {
            cout << "  ";
		}
        for(int j = i; j < 2 * i - 1; ++j) {
            cout << j << " ";
        }
        for(int j = 2 * i - 1; j >= i; --j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

