#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	long long f1=1, f2=1;
	long long fi;
	if(n<1 || n>92)
	{
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		if(i==1|| i==2)
		{
			cout << 1 << endl;
		}
		else {
			fi=f1+f2;
			f1=f2;
			f2=fi;
			cout << fi << endl;
		}
	}
	return 0;
}
