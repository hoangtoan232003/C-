#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long tong = 0;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		tong += 1ll * i * i;
	}
	cout << tong;
	return 0;
}
