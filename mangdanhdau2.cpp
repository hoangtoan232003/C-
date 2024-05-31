#include<bits/stdc++.h>
using namespace std;
int cnt[1000001];
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int maxval = INT_MIN;
	for(int i=0;i<n;i++)
	{
		cnt[a[i]]++;
		maxval = max(maxval, a[i]);
	}
	for(int i=0;i <= maxval;i++)
	{
		if(cnt[i] != 0)
		{
			cout << i << " " << cnt[i] << endl;
			cnt[i] == 0;
		}
	}
}
