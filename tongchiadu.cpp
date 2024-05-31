#include <iostream>
using namespace std;

const long long MOD = 1e9+7;

int main() {
    int N;
    cin >> N;
    long long sum = 0;
    long long num;

    for (int i = 0; i < N; ++i) {
        cin >> num;
        sum = (sum + num) % MOD;
    }

    cout << sum << endl;
    return 0;
}
