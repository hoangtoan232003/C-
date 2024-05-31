#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long  f1= 1, f2= 1;
    long long fn, mod = 1e9+7;
    for(int i=3; i<=n;i++)
    {
        fn = (2 * f2 % mod + 3 * f1 % mod) % mod;
        f1=f2;
        f2=fn;
    }
    if(n==1 || n==2) cout << 1;
    else cout << fn << endl;
    return 0;
}
