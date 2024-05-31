#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	int max=n%10;
	n/=10;
	while(n>0)
	{
		int ans=n%10;
		if(ans > max)
		{
			max = ans;
		}
		n/=10;
	}
	cout << max;
}
