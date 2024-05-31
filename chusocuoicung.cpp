#include<bits/stdc++.h>
using namespace std;
long long check(long long n, long long m, long long mod)
{
	long long res=1;
	while(m>0)
	{
		if(m%2==1)
		{
			res =(res*n) % mod;
		}
		n = (n*n) % mod;
		m/=2;
	}
	return res;
}

int main()
{
	long long n, m, k, mod = 1;
	cin >> n >> m >> k;
	for(int i=1;i<=k;i++)
	{
		mod*=10;
	}
	long long ans = check(n, m, mod);
	cout << ans << endl;
	return 0;
}
