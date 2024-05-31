#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long power(long long a, long long b) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;

    long long fact_n = 1;
    for (int i = 1; i <= n; ++i) {
        fact_n = (fact_n * i) % MOD;
    }

    long long inv_fact_m = power(fact_n, MOD - 2);

    long long result = (fact_n * inv_fact_m) % MOD;
    cout << result << endl;

    return 0;
}

