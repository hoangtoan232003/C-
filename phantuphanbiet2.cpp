#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x; cin >> n;
	map<int, int> mp;
	for(int i=0; i<n;i++)
	{
		cin >> x;
		mp.insert({x, 1});
	}
	cout << mp.size();
	return 0;
}