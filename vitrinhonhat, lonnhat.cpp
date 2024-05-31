#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	int tmp =0, res =0;
	int _max = 0, _min = 1000001;
	for(int i =0;i<n;i++)
	{
		cin >> a[i];
		_max = max(_max, a[i]);
		_min = min(_min, a[i]);
	}
	cout << _min << endl;
	for(int i=0;i<n;i++)
	{	
		if(a[i] == _min) cout << i << endl;
	}
	cout << _max << endl;
	for(int i=0;i<n;i++)
	{
		if(a[i] ==  _max) cout << i;
	}
	return 0;
}
