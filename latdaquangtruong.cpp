#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, m, a;
	cin >> n >> m >> a;
	if(n%a==0 && m%a==0)
	{
		cout << (m/a)*(n/a);
	} else
	{
		cout << ((m/a)+1)*((n/a)+1);
	}
	return 0;
}
