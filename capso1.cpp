#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k; cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cin >> k;
	int res = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i] + a[j] == k) res++;
		}
	}
	cout << res;
}
