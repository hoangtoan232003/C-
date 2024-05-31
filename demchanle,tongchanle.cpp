#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, chan=0, le=0, sum =0, res =0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]%2==0)
		{
			chan++;
			sum +=a[i];
		}
		else 
		{
			res+=a[i];
			le++;
		}
	}
	cout << chan << endl << le << endl << sum << endl << res;
}
