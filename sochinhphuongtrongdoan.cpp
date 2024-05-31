#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long start = ceil(sqrt(a));
    long long end = floor(sqrt(b));
    for(int i = start; i <= end; i++)
    {
        cout << i << endl;
        if (i < end) cout << " ";
    }
    return 0;
}


