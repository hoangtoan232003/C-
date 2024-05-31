#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matrix[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        int row_sum = 0;
        for (int j = 0; j < M; ++j) {
            row_sum += matrix[i][j];
        }
        cout << row_sum << " ";
    }
    cout << endl;

    for (int j = 0; j < M; ++j) {
        int col_sum = 0;
        for (int i = 0; i < N; ++i) {
            col_sum += matrix[i][j];
        }
        cout << col_sum << " ";
    }
    cout << endl;

    return 0;
}

