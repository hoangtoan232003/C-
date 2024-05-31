#include<bits/stdc++.h>
using namespace std;

int d[100005];
const int mod = 1e9+7;	

void phantich(int n){
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n % i == 0)
		{
			while(n%i == 0) 
			{
				d[i]++;
				n/=i;	
			}
		}
	}
	if(n > 1) d[n]++;
}

int main(){
	int n;
	cin >> n;
	for(int i = 2;i<= n;i++)
	{
		phantich(i);
	}
	long long res = 1;
	for(int i =2;i<=100005;i++)
	{
		if(d[i]!=0) res = (res * ( d[i] + 1)) % mod;
	}
	cout << res;
	return 0;
}
