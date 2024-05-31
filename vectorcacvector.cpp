#include<bits/stdc++.h>
using namespace std;

void nhap(vector<vector<int> > &v, int n, int m){
    for(int i =1;i<=n;i++)
    {
    	vector<int> tmp;
    	for(int j=1;j<=m;j++)
    	{
    		int x; cin >> x;
    		tmp.push_back(x);
		}
		v.push_back(tmp);
	}    
}

void xuat(vector<vector<int> > v, int n, int m){
	for(vector<int> &t:v)
    {
    	for(int x : t)
    	{
    		cout << x << " ";
		}
		cout << endl;
	}
}

void lat(vector<vector<int> > &v, int n, int m){
    for(vector<int> &t : v)
    {
    	int left =0, right = t.size()-1;
    	while(left < right)
    	{
    		swap(t[left], t[right]);
    		left++;
    		right--;
		}
	}
}

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int> > v;
    nhap(v, n, m);
    lat(v, n, m);
    xuat(v, n, m);
}
