#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
    long long f1=1,f2=1, fi;
        if(n==1) return true;
        for(int i=1;i<=93;i++)
        {
            fi=f1+f2;
            if(n==fi) return true;
            f1=f2;
            f2=fi;
        }
        return false;
}

int main(){
    int t;
    long long n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(check(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
