#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool found = false;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num == 2022) {
            found = true; 
            break;
        }
    }
    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

