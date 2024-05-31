#include<bits/stdc++.h>
using namespace std;

bool checkfibonacci(long long n)
{
	long long F[100];
	F[0]=0,F[1]=1;
	if(n==0 || n==1) return true;
	for(int i=2;i<=93;i++)
	{
		F[i] = F[i-1]+F[i-2]; 
		if(F[i] == n) return true;
	}
	return false;
}
int main(){
	int n; cin >> n;
	long long a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	bool check = false;
	for(int i=0;i<n;i++)
	{
		if(checkfibonacci(a[i]))
		{
			cout << a[i] << " ";
			check = true;
		}
	}
	if(!check) cout << "NONE";
}
