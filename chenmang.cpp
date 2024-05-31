#include<bits/stdc++.h>
using namespace std;

void chen(int a[], int &n, int p, int x)
{
	for(int i = n; i > p;i--)
	{
		a[i] = a[i-1];
	}
	a[p] = x;
	n++;
}
int main()
{
	int n, m, p; cin >> n >> m >> p;
	int a[n+m], b[m];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin >> b[i];
	}
	for(int i=p;i < p+m;i++)
	{
		chen(a, n, i, b[i-p]);
	}
	for(int i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
