#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a, b, res=0;
	cin >> a >> b;
	long long start = ceil(sqrt(a));
	long long end = floor(sqrt(b));
	for(int i=start; i<=end ;i++)
	{
		res++;
	}
	cout << res << endl;
	return 0;
}
