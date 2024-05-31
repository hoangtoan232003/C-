#include<bits/stdc++.h>
using namespace std;

bool check(long long n){
	int res = 0;
	for(int i=2; i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			res++;
			n/=i;
			if(n%i==0) return 0;
			if(res > 3) return 0;
		}
	}
	if(n>1) res++;
	return res == 3;
}

int main(){
	long long n;
	cin >> n;
	cout << check(n);
	return 0;
	
}
