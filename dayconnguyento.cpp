#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i == 0) return 0;
	}
	return n>1;
}

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
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum +=a[j];
			if(check(sum)) ans++;
		}
	}
	cout << ans;
	return 0;
}
