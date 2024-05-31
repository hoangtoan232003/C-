#include<bits/stdc++.h>
using namespace std;

int checkunt(int n)
{
	int max=2;
	while(n%2==0)
	{
		n/=2;
	}
	for(int i=3;i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			max=i;
			n/=i;
		}
	}
	if(n>2) max = n;
	return max;
}

int main(){
	int t,n; cin >> t;
	while(t--){
		cin >> n;
		cout << checkunt(n) << endl;
	}
	return 0;
}
