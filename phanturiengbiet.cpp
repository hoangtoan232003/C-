#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	set<int> se;
	for(int i=0; i<n;i++)
	{
		int x; cin >> x;
		if(se.find(x) == se.end())
		{
			cout << x << " ";
			se.insert(x);
		}	
	}
	return 0;
}