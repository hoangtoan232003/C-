#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n],x, l=0,nh=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];	
	}
	cin >> x;
	for(int i=0;i<n;i++)
	{
		if(a[i] > x) l++;
		else if(a[i] < x) nh++;
	}
	cout << nh << endl << l;
	return 0;
}
