#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, res=1;
	cin >> n;
	double sum=1;
	for(int i=1;i<=n;i++)
	{
		res *= i;
		sum+=(double)1/res;
	}
	cout << fixed << setprecision(2) << sum;
}
