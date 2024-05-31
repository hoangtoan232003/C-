#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,f1=1,f2=1,fi;
	cin >> n;
	if(n==1) cout << 1;
	while(fi<n)
	{
		fi=f1+f2;
		f1=f2;
		f2=fi;
	}
	cout << fi;
	return 0;
}
