#include <iostream>
#include <vector>
using namespace std;

bool hasIncreasingTriplet(vector<int>& A) {
    int n = A.size();
    vector<bool> left_smaller(n, false);
    vector<bool> right_larger(n, false);

    int min_val = A[0];
    for (int i = 1; i < n; ++i) {
        if (A[i] > min_val) {
            left_smaller[i] = true;
        }
        min_val = min(min_val, A[i]);
    }

    int max_val = A[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        if (A[i] < max_val) {
            right_larger[i] = true;
        }
        max_val = max(max_val, A[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (left_smaller[i] && right_larger[i]) {
            return true;
        }
    }

    return false;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (hasIncreasingTriplet(A)) {
        cout << "28tech" << endl;
    } else {
        cout << "29tech" << endl;
    }

    return 0;
}

