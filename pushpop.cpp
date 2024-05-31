#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int n; cin >> n;
	int a, x;
	for(int i=0;i<n;i++)
	{
		cin >> a;
		if(a == 1)
		{
			cin >> x;
			v.push_back(x);
		}
		else if(a == 2 && !v.empty())
		{
			v.pop_back();
		}
	}
	if(v.empty()){
		cout << "EMPTY";
	}
	else{
		for(int x : v)
		{
			cout << x << " ";
		}
	}
}
