#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int minz = INT_MAX;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[i] - a[j]) < minz)
			{
				minz = min(minz, abs(a[i] - a[j]));
			}
		}
	}
	cout << minz;
}
