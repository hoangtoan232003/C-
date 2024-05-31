#include<bits/stdc++.h>
using namespace std;

int d[28];
int main()
{
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		int x = a[i] % 28;
		int y = (28-x)%28;
		ans += d[y];
		d[a[i]%28]++;
	}
	cout << ans;
	return 0;
}
