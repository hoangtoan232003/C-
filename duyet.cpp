#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	int l, r; cin >> l >> r;
	for(vector<int> ::iterator it = v.begin()+l; it != v.begin()+1+r;it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	// reverse : lat nguoc vector
	reverse(v.begin()+l, v.begin()+1+r);
	for(vector<int> ::iterator it = v.begin()+l; it!=v.begin()+r+1;it++)
	{
		cout << *it << " ";
	}
}
