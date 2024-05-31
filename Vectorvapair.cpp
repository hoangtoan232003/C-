#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<pair<int,int> >v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	for(pair<int,int> x : v)
	{
		cout << fixed << setprecision(2) << sqrt(x.first*x.first + x.second * x.second) << " ";
	}
}
