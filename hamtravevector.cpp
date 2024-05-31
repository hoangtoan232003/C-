#include<bits/stdc++.h>
using namespace std;

bool nt(int n){
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i == 0) return false;
	}
	return n>1;
}

vector<int> prime_list(vector<int> v){
    vector<int> res;
	for(int x : v)
    {
    	if(nt(x))
    	{
    		res.push_back(x);
		}
	}
}

void nhap(vector<int> &v){
	int n; cin >> n;
	for(int i=0;i<n;i++)
	{
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}
}

void in(vector<int> v)
{
	for(int x : v)
	{
		cout << x << " ";
	}
}
int main(){
    vector<int> v;
    nhap(v); 	
    vector<int> res = prime_list(v);
    in(res);
}
