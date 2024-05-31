#include <iostream>
using namespace std;

int countOnes(int num) {
    int cnt = 0;
    while (num > 0) {
        cnt += num % 2;
        num /= 2;
    }
    return cnt;
}

int main() {
    int T;
    cin >> T;

    while (T--){
        int N, L, R;
        cin >> N >> L >> R;
        int result = 0;
        for (int i = L; i <= R; i++) {
            if(countOnes(i)==1)
            {
            	result++;
			}
        }
        cout << result << endl;
    }
    return 0;
}


