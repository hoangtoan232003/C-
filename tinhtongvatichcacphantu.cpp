#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int mod = 1e9+7;
    long long tong = 0, tich =1;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        tong += a[i] % mod;
        tich *= a[i] % mod;
        tich%=mod;
        tong%=mod;
    }
    cout << tong << endl << tich;
}
