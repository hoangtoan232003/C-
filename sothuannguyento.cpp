#include<bits/stdc++.h>
using namespace std;

bool snt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

bool chusont(int n){
    while(n>0)
    {
        int r = n%10;
        if(r!=2 && r!=3 && r!=5 && r!=7)
        {
            return false;
            break;
        }
        n/=10;
    }
    return true;
}

bool tongchusont(int n){
    int tong = 0;
    while(n>0)
    {
        tong += n%10;
        n/=10;
    }
    return snt(tong);
}

int main(){
    int a, b, tong = 0;
    cin >> a >> b;
    for(int i=a; i<=b;i++)
    {
        if(chusont(i) && snt(i) && tongchusont(i))
        {
            tong++;
        }
    }
    cout << tong;
}
