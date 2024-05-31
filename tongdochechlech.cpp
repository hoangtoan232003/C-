#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, sum = 0;
    cin >> n;
    int ans2 = n%10;
    n/=10;

    while(n > 0) {
        int ans1 = n % 10;
        sum += abs(ans1 - ans2);
        ans2 = ans1;
        n /= 10;
    }

    cout << sum;
    return 0;
}

