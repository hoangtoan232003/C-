#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n;
	int a[n];
	int l = 0, k = 0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cin >> x;
	for(int i=0;i<n;i++)
	{
		if(a[i] > x) l++;
		else if(a[i] < x) k++;
	}
	cout << k << endl << l << endl;
	return 0;
}
