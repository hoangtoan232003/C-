#include<bits/stdc++.h>
using namespace std;

bool snt(int n){
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i == 0) return false;
	}
	return n>1;
}

bool stn(int n){
	int tmp = n, res=0;
	while(n)
	{
		res = res*10 + n % 10;
		n/=10;
	}
	return tmp == res;
}

bool scp(int n){
	int tmp = sqrt(n);
	return (tmp * tmp) == n;
}

int tcs(int n)
{
	int sum = 0;
	while(n)
	{
		sum +=n%10;
		n/=10;
	}
	return sum;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int dem1=0, dem2=0, dem3=0, dem4=0;
   	for(int i=0;i<n;i++)
   	{
   		int tmp = tcs(a[i]);
		if(snt(a[i])) dem1++;
		if(stn(a[i])) dem2++;
		if(scp(a[i])) dem3++;
		if(snt(tmp)) dem4++;
	}
	cout << dem1 << endl << dem2 << endl << dem3 << endl << dem4;
}
