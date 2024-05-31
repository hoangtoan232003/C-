#include<bits/stdc++.h>
using namespace std;

bool snt(int n)
{
	if(n==1) return false;
	if(n==2 || n==3) return true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return false;
	}
	return true;
}

int sumaa(int n){
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}

bool check(int n){
	long long f1=1, f2=1, fi;
	if(sumaa(n)==1) return true;
	for(int i=0;i<n;i++)
	{
		fi=f1+f2;
		if(sumaa(n)==fi) return true;
		f1=f2;f2=fi;
	}
	return false;
}

int main(){
	int n; cin >> n;
	for(int i=0;i<n;i++)
	{
		if(snt(i) && check(i))
		{
			cout << i << " ";
		}
	}
	return 0;
}
