#include <iostream>
using namespace std;
const int N = 1000;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int res = 1;
    bool appeared[N] = {false};
    for (int i = 0; i < N; ++i) {
        for(int j=i+1;j<N;j++){
            if(A[i]==A[j]) res++;
        }
        if (!appeared[A[i]]) {
            cout << A[i] << " " << res << endl;
            appeared[A[i]] = true;
        }
        res=1;
    }

    return 0;
}

