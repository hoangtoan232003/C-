#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b;
	cin >> a >> b;
	long long res = __gcd(a, b);
	long long tmp = a/res*b;
	cout << res << " " << tmp << endl;
	return 0;
}
