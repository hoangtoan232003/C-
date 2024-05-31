#include<bits/stdc++.h>
using namespace std;

long long check(long long n){
	long long tmp = n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i == 0)
		{
			while(n%i == 0)
			{
				n/=i;
			}
			tmp = tmp - tmp/i;
		}
	}
	if(n>1) tmp = tmp - tmp/n;
	return tmp;
}
int main(){
	long long n; cin >> n;
	cout << check(n);
	return 0;
}
