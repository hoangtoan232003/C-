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
	int chan =0, le =0;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(a[i] %2 == 0) ans+=chan;
		else ans+=le;
		if(a[i] %2 == 0) ++chan;
		else ++le;
	}
	cout << ans;
	return 0;
}
