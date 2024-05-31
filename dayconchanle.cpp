#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int chan =0, le =0;
		for(int j=i;j<n;j++)
		{
			if(a[j] % 2) chan++;
			else le ++;
			if(chan == le) ans++;
		}
	}
	cout << ans;
}
