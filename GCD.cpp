#include<bits/stdc++.h>
using namespace std;
int lcm(int a, int b){
	int lcm=(a*b)/(__gcd(a,b));
	return lcm;
}
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	long long e = lcm((lcm(a, b)),(lcm(c, d)));
	cout << __gcd((__gcd(a,b)),(__gcd(c,d))) << " " << e;
}
