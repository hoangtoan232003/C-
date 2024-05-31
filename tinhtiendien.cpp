#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	long long tiendien;
	cin >> n;
	if(n>=1000)
	{
		tiendien = n*4500 + 1200000;
	}
	if(n>=800 && n<1000) tiendien = n*3900 + 900000;
	if(n>=500 && n<800) tiendien = n*3700 + 800000;
	if(n<500) tiendien = n*3300;
	cout << tiendien;
}
