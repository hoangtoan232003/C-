#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

bool isSafe(vector<int>& queens, int row, int col) {
    for (int i = 0; i < row; ++i) {
        if (queens[i] == col || abs(queens[i] - col) == row - i) {
            return false;
        }
    }
    return true;
}

void solveNQueens(vector<int>& queens, int row, int n) {
    if (row == n) {
        for (int i = 0; i < n; ++i) {
            cout << queens[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int col = 0; col < n; ++col) {
        if (isSafe(queens, row, col)) {
            queens[row] = col;
            solveNQueens(queens, row + 1, n);
        }
    }
}

int main() {
    int n = 4;
    vector<int> queens(n, -1);
    solveNQueens(queens, 0, n);
    return 0;
}

