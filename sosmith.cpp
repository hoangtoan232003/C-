#include<bits/stdc++.h>
using namespace std;
int tong(long long n){
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

bool smith(long long n)
{
    int tong1=tong(n), tong2=0, tmp=n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                tong2+=tong(i);
                n/=i;
            }
        }
    }
    if(tmp==n) return 0;
    if(n>1) tong2+=tong(n);
    return tong1 == tong2;
}

int main(){
    long long n; cin >> n;
    if(smith(n)) cout << "YES";
    else cout << "NO";
    return 0;
}
