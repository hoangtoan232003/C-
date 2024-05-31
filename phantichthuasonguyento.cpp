#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	for(int i=2; i<=sqrt(n);i++)
	{
		if(n%i == 0)
		{
			int e = 0;
			while(n%i == 0)
			{
				e++;
				n/=i;
			}
			cout << i << '^' << e;
			if(n>1) cout << " * ";
		}
	}
	if(n>1) cout << n << '^' << 1;
}
