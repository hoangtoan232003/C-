#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<pair<pair<int, int>,int> > v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i].first.first >> v[i].first.second >> v[i].second;
	}
	for(pair<pair<int, int>,int> x : v)
	{
		cout << x.first.first + x.first.second + x.second << " ";
	}
}
