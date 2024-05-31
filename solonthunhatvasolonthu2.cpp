#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int max1=0, max2=0, vt=0;
    for(int i=0;i<n;i++)
    {
    	if(a[i] > max1)
    	{
    		max1 = a[i];
    		vt=i;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i !=vt && a[i] > max2)
		{
			max2=a[i];
		}
	}
	cout << max1 << " " << max2;
}
