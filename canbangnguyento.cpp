#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	int a[n], res=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];	
	}
	for(int i=0;i<n;i++)
	{
		long long tong1=0, tong2=0;
		for(int j=0;j<i;j++)
		{
			tong1+=a[j];
		}
		for(int j=i+1;j<n;j++)
		{
			tong2+=a[j];
		}
		if(check(tong1) && check(tong2)) cout << i << " ";
	}
	return 0;
}
