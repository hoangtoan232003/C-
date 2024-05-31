#include<bits/stdc++.h>
using namespace std;

vector<int> unique_vector(vector<int> v){
	for(int i=1; i < v.size();i++)
	{
		if(v[i] == v[i-1])
		{
			v.erase(v.begin() + i);
			i--;
		}
	}
	return v;
}

vector<int> nhap(){
	int n; cin >> n;
	vector<int> tmp;
	for(int i=0;i<n;i++)
	{
		int x; cin >> x;
		tmp.push_back(x);
	}
	return tmp;
}

void in(vector<int> v){
	for(int x : v)
	{
		cout << x << " ";
	}
}

int main(){
    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);
}