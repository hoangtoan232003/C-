#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, Q, x; 
	cin >> n;
	set<int> se;
	for(int i=0; i<n;i++)
	{
		int tmp; cin >> tmp;
		se.insert(tmp);
	}
	cin >> Q;
	while(Q--)
	{
		cin >> x;
		set<int>::iterator it=se.find(x);
		if(it == se.end()) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}