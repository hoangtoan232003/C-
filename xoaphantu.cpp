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
		if(a[i] != 28)
		{
			cout << a[i] << " ";
			ok = 1;
		}
	}
	if(ok) cout << "EMPTY";
}
