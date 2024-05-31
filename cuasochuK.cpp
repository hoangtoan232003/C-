#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int k; cin >> k;
	int a[n];
	for(int i=0; i< n;i++)
	{
		cin >> a[i];
	}
	int res = 0;
	for(int i = 0;i <= n-k;i++)
	{
		for(int j=i;j < k+i;j++)
		{
			res += a[j];
		}
		cout << res << " ";
		res=0;
	}
}
