#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	while(b){
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

long long LCM(long long a, long long b){
	return a/gcd(a, b)*b;
}

int main(){
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	long long x = LCM(a, LCM(b,c));
	long long l = pow(10, n-1), u = pow(10, n);
	long long ans = ((l+x-1)/x) * x;
	if(ans < u) cout << ans;
	else cout << -1;
}
