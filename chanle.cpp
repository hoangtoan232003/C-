#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	int chan=0, le=0;
	if(n == 0)
	{
		cout << "28tech";
		return 0;
	}
	while(n)
	{
		int ans = abs(n%10);
		if(ans %2 == 0) chan++;
		else le++;
		n/=10;
	}
	if(le < chan) cout << "28tech";
	else cout << "29tech";
}
