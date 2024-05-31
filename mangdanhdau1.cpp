#include<bits/stdc++.h>
using namespace std;
int cnt[1000001];
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int max_val=INT_MIN;
	int dem =0;
	for(int i=0;i<n;i++)
	{
		cnt[a[i]]=1;
		max_val = max(max_val, a[i]);
	}
	for(int i=0;i <= max_val;i++)
	{
		if(cnt[i] == 1) dem ++;
	}
	cout << dem;
}
