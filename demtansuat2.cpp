#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<pair<char,int> > v;
	for(int i=0; i<n; i++)
	{
		char x; cin >> x;
		bool ok = false;
		for(int j=0; j<v.size();j++)
		{
			if(v[j].first == x)
			{
				ok = true;
				v[j].second++;
			}
		}
		if(ok == false) v.push_back({x, 1});
	}
	cout << v.size() << endl;
	for(pair<char,int> x:v)
	{
		cout << x.first << " " << x.second << endl;
	}
}
