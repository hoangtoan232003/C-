#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	bool check = false;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i = 0;i<n;i++)
	{
		if(i%2==0 && a[i]%2==0)
		{
			cout << a[i] << " ";
			check = true;
		}
	}
	if(!check) cout << "NONE";
}
