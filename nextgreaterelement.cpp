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
	bool ok = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j] > a[i])
			{
				cout << a[i] << " ";
				ok=1;
				break;
			}
		}
		if(ok==0) cout << "-1";
	}
}
