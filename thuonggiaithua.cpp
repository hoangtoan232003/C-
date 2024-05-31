#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	double  sum=1, ans=1;
	for(int i=1;i<n;i++)
	{
		ans *= i;
		sum += 1/ans;
	}
	cout << fixed << setprecision(4) << sum;
}
