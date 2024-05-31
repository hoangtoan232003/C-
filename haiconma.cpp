#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	for(int k =1; k<=n;k++)
	{
		long long so = k * k;
		long long r = so * (so-1) / 2;
		long long x = 4 * (k-1) * (k-2);
		cout << r-x << endl;
	}
}
