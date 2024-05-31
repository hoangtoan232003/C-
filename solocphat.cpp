#include<bits/stdc++.h>
using namespace std;

bool locphat(long long n){
    int tmp=0;
    while(n)
    {
        tmp = n%10;
        if(tmp != 6 && tmp !=8 && tmp !=0) return false;
        n/=10;
    }
    return true;
}

int main(){
    long long n; cin >> n;
    if(locphat(n)){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}
