#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string N;
    cin >> N;

    swap(N[N.size() - 1], N[N.size() - 2]);

    cout << N << endl;

    return 0;
}

