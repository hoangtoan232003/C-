#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	int max=n%10;
	n/=10;
	while(n>=10)
	{
		int ans = n%10;
		if(ans > max)
		{
			max = ans;
		}
		n/=10;
	}
	if(n >= max) cout << "YES";
	else cout << "NO";
}
