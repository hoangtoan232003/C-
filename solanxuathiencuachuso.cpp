#include<bits/stdc++.h>
using namespace std;
int d[10000001];

void dem(int x)
{
    if(x==0)
    {
    	d[0]++;
    	return;
	}
	x = abs(x);
    while(x)
    {
    	d[x%10]++;
    	x/=10;
	}
}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        dem(a[i]);
    }
    for(int i=0;i<10;i++)
    {
    	if(d[i]) cout << i << " " << d[i] << endl;
	}
    return 0;
}
