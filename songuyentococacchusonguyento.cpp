#include<bits/stdc++.h>
using namespace std;
bool snt(long long n){
    if(n<2) return false;
        for(int i=2; i<= sqrt(n); i++)
        {
            if(n % i == 0) return false;
        }
    return true;    
}

bool chusont(long long n)
{
    long long r = n%10;
    while(n>0)
    {
        if(r != 2 && r!=3 && r!=5 && r!=7) 
        {
            return false;
            break;
        }
        n/=10;
        r = n%10;
    }    
    return true;
}

int main(){
    long long a, b;
    int sum =0;
    cin >> a >> b;
    for(int i=a; i<=b; i++)
    {
        if(chusont(i) && snt(i))
        {
            ++sum;
        }
    }
    cout << sum;
}
