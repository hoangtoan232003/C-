#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a[n];
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int min_val = a[0];
	for(int i=1;i<n;i++)
	{
		if( min_val > a[i])
		{
			min_val = a[i];
		}
	}
	int dem = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] == min_val)
		{
			++dem;
		}
	}
	cout << dem;
	return 0;
}
