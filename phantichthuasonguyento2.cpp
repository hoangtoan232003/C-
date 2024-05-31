#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void primeFactors(int n, vector<int>& factors, vector<int>& powers) {
    while (n % 2 == 0) {
        if (factors.empty() || factors.back() != 2) {
            factors.push_back(2);
            powers.push_back(1);
        } else {
            powers.back()++;
        }
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            if (factors.empty() || factors.back() != i) {
                factors.push_back(i);
                powers.push_back(1);
            } else {
                powers.back()++;
            }
            n = n/i;
        }
    }

    if (n > 2) {
        factors.push_back(n);
        powers.push_back(1);
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> factors, powers;
    primeFactors(N, factors, powers);

    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
}

