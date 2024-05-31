#include <iostream>
#include <vector>
using namespace std;

bool canReachEnd(vector<int>& A) {
    int n = A.size();
    int farthest = 0;

    for (int i = 0; i < n; ++i) {
        if (i > farthest) {
            break;
        }
        farthest = max(farthest, i + A[i]);
    }

    return farthest >= n - 1;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (canReachEnd(A)) {
        cout << "28tech" << endl;
    } else {
        cout << "29tech" << endl;
    }

    return 0;
}

