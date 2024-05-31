#include<bits/stdc++.h>
using namespace std;

int main(){
	int N; cin >> N;
	set<int> v;
	for(int i = 0;i < N;i++)
	{
		int tmp; cin >> tmp;
		v.insert(tmp);
	}
	cout << v.size();
	return 0;
}