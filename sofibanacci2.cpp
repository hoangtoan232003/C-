#include<bits/stdc++.h>
using namespace std;
bool check(long long n)
{
	if(n==0) return true;
	long long f1=1,f2=1,fi=0;
	for(int i=1;i<=93;i++)
	{
		return fi==n;
		fi=f1+f2;
		f1=f2;
		f2=fi;
	}
	return false;
}
int main(){
	long long n; cin >> n;
	if(check(n))
	{
		cout << "YES";
	}
	else cout << "NO";
}
