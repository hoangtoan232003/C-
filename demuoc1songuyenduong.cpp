#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long t, res =1, mod=1e9+7;
	cin >> t;
	while(t--)
	{
		long long p, e;
		cin >> p >> e;
		res *=(e+1);
		res %=mod;
	}
	cout << res;
	return 0;
}
