#include<iostream>
#define ll long long
using namespace std;

ll rev(ll n){
    long long a = 0;
	while(n>0)
    {
    	a = a * 10 + n%10;
    	n/=10;
    }
    return a;
}

int main(){
    ll n; cin >> n;
    cout << rev(n);
    return 0;
}
