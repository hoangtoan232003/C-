#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			if(a[i] * a[i+1] < 0)
			{
				cout << a[i] << " ";
			}
		}
		else if(i==n-1)
		{
			if(a[n-1] * a[n-2] < 0)
			{
				cout << a[n-1] << " ";
			}
		}
		else if(a[i] * a[i-1] < 0 || a[i] * a[i+1] <0)
		{
			cout << a[i] << " ";
		}
	}
}
