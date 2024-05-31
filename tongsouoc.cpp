#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n; cin >> n;
	long long res=0;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			res+=i;
			if(n/i!=i)
			{
				res+=(n/i);
			}
		}
	}
	cout << res;
	return 0;
	
}
