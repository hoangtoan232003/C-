#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, q; cin >> n >> q;
	vector<vector<int>>v;
	for(int i=1;i <= n;i++)
	{
		vector<int>tmp;
		int m; cin >> m;
		for(int j=1;j <= m;j++)
		{
			int x; cin >> x;
			tmp.push_back(x);
		}
		v.push_back(tmp);
	}
	while(q--)
	{
		int x, y; cin >> x >> y;
		--x; y--;
		vector<int>tmp = v[x];
		cout << tmp[y] << endl;
	}
}