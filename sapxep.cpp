#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for(int x : v) cout << x << " ";
	cout << endl;
	sort(v.begin(), v.end(), greater<int> ());
	for(int x : v) cout << x << " ";
	return 0;
}
