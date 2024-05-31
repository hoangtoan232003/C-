#include<bits/stdc++.h>
using namespace std;
const int maxn= 1001;
int t[maxn], f[maxn];
const int MOD = 1e9+7;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x : a)
	{
		cin >> x;
		t[x]++;
		f[x]++;
	}
	for(int x : a)
	{
		if(t[x] != 0)
		{
			cout << x << " " << t[x] << endl;
			t[x]=0;
		}
	}
	cout << endl;
	int _max=0, _min = MOD;
	for(int i=0; i< maxn; i++)
	{
		if(f[i] != 0)
		{
			_max = max(_max, f[i]);
			_min = min(_min, f[i]);
			cout << i << " " << f[i] << endl;
		}
	}
	cout << endl;
	for(int i = 1000; i > 0; i--)
	{
		if(f[i] == _max)
		{
			cout << i << endl;
			break;
		}
	}
	cout << endl;
	for(int i =0; i <= 1000 ;i++)
	{
		if(f[i] == _min)
		{
			cout << i << endl;
			break;
		}
	}
}

