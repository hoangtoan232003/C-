#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long mod=1e9+7, sum=1;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        sum*=i;
        sum%=mod;
        cout << sum << endl;
    }
}
