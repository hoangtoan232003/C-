#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum =1, res=0; cin >> n;
	for(int i=1;i<=n;i++)
	{
		sum*=i;
		res+=sum;
	}
	cout << res;
}
