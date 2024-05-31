#include<bits/stdc++.h>
using namespace std;

long long prime(long long a, long long b){
	long long mod =1e9+7;
	a%=mod;
	long long res = 1;
	while(b){
		if(b%2) res = (res * a) % mod;
		a= (a*a) % mod;
		b/=2;
	}
	return res;
}

int main(){
	long long a, b;
	cin >> a >> b;
	cout << prime(a, b) << endl;
	return 0;
}
