#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int tmp = 0, minn = 1e9+7;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			tmp = abs(a[j] - a[i]);
			minn = min(minn, tmp);
		}
	}
	cout << minn;
}
