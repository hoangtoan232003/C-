#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum=1;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout << sum++ << " ";
		} cout << endl;
	}
	cout << endl;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n+i-1;j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=n-i;j>0;j--)
		{
			cout << "~";
		}
		for(int j=1;j<=i;j++)
		{
			cout << i;
		}
		cout << endl;
	}
	cout << endl;

	for(int i=1;i<=n;i++)
	{
		int ans=i;
		for(int j=1;j<=i;j++)
		{
			cout << ans << " ";
			ans = ans+n-j;
	
		}
		cout << endl;
	}
}
