#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& A) {
    int n = A.size();
    int buy_price = A[0];
    int max_profit = 0;

    for (int i = 1; i < n; ++i) {
        if (A[i] > buy_price) {
            max_profit = max(max_profit, A[i] - buy_price);
        } else {
            buy_price = A[i];
        }
    }

    return max_profit;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << maxProfit(A) << endl;

    return 0;
}

