#include<bits/stdc++.h>
using namespace std;




bool tn(int n){  
    int tmp=n, res=0;
    while(n)
    {
        res = res*10 + n%10;
        n/=10;
    }
    return tmp == res;
}

bool chua6(int n){
    while(n)
    {
        int tmp = n%10;
        if(tmp != 6) return false;
        n/=10;
    }
    return true;
}

bool tong8(int n){
    int res=0;
    while(n)
    {
        res += n%10;
        n/=10;
    }
    if(res%10 == 8) return true;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(tn(i) && chua6(i) && tong8(i)){
            cout << i << " ";
        }
    }
    return 0;
}
