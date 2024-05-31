#include<bits/stdc++.h>
using namespace std;

bool checksnt(long long n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i ==0) return 0;
	}
	return 1;
}

int main(){
	int n, res=0;
	cin >> n;
	int a[n];
	double tmp = 0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(checksnt(a[i]))
		{
			res++;
			tmp+=a[i];
		}
	}
	cout << fixed << setprecision(3) << tmp/res;
	return 0;
}
