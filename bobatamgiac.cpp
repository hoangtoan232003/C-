#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countTriangles(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());

    int count = 0;
    for (int i = n - 1; i >= 2; i--) { 
        int left = 0;
        int right = i - 1;
        while (left < right) {
            if (arr[left] + arr[right] > arr[i]) {
                count += right - left;
                right--;
            } else {
                left++;
            }
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << countTriangles(A) << endl;
    return 0;
}

