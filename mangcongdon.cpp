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
	int f[n];
	f[0] = a[0];
	for(int i=1;i<n;i++)
	{
		f[i] = f[i-1] + a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout << f[i] << " ";
	}
	cout << endl;
	return 0;
}
