#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector <int> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	int t; cin >> t;
	while(t--)
	{
		int tt; cin >> tt;
		if(tt == 1)
		{
			int index, x; cin >> index >> x;
			if(index >=0 && index <= v.size())
			{
				v.insert(v.begin() + index, x);
			}
		}
		else
		{
			int index; cin >> index;
			if(index >= 0 && index <= (int)v.size())
			{
				v.erase(v.begin() + index);
			}
		}
	}
	if(v.size() == 0) cout << "EMPTY";
	else
	{
		for(int x : v)
		{
			cout << x << " ";
		}
	}
	return 0;
}
