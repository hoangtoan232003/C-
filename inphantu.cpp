#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], res=0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];	
	}
	for(int i=0;i<n;i+=2)
	{
		if(a[i] %2 ==0)
		{
			res++;
			cout << a[i] << " ";
		}
	}
	if(res == 0) cout << "NONE";
	return 0;
}
