#include<bits/stdc++.h>
using namespace std;

bool check(int n){
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i == 0) return false;
        }
    return true;
}

bool tmp(int n){
    int a = n%10;
    n/=10;
    while(n)
    {
        int res = n%10;
        if(res > a) return false;
        n/=10;
    }
    return true;
}
int main(){
    int n, sum = 0; 
    cin >> n;
    for(int i=2;i<=n;i++)
    {
        if(tmp(i) && check(i))
        {
            cout << i << " ";
            sum++;
        }
    }
    cout << endl << sum;
    return 0;
}
