#include<bits/stdc++.h>
using namespace std;

long long check(long long n){
    long long x=5;
    long long res = 0, mod = 1e9+7;
    while(x<=n)
    {
        res += n/x;
        res %=mod;
        x*=5;
    }
    return res;
}

int main(){
    long long n;
    cin >> n;
    cout << check(n);
    return 0;
}
