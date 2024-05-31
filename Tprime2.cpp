#include<bits/stdc++.h>
using namespace std;

bool kiemtrasnt(int n){
	if(n<2) return false;
	for(int i =2; i<=sqrt(n);i++)
	{
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	long long n, res = 0;
	cin >> n;
	for(long long i=2; i*i<=n;i++)
	{
		if(kiemtrasnt(i))
		{
			long long sum = i*i;
			if(sum <=n) res++;
		}
	}
	cout << res;
}
