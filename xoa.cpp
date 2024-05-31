#include<bits/stdc++.h>
using namespace std;

int cs(int a[], int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(a[i] == x) return i;
	}
	return -1;
}

int main()
{
	int n; cin >> n;
	int x; cin >> x;
	int a[n];
	for(int i=0; i<n;i++)
	{
		cin >> a[i];
	}
	int tmp = cs(a, n, x);
	if(tmp == -1) cout << "NOT FOUND";
	else 
	{
		for(int i = 0;i < n;i++)
		{
			if(i != tmp)
			{
				cout << a[i] << " ";
			}
		}
	}
}
