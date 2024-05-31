#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int length(int a[], int n)
{
	int ans = 1, dem =1;
	for(int i=1;i<=n;i++)
	{
		if(a[i] > a[i-1]) ++dem;
		else {
			ans = max(ans, dem);
			dem =1;
		}
	}
	return ans;
}

int main()
{
    int t; cin >> t;
    for(int test =1; test <= t;test++)
    {
	    int n; cin >> n;
	    int a[n+1];
		for(int i =0;i<n;i++)
		{
			cin >> a[i];
		}
		a[n]=-MOD;
	    int ans = length(a, n);
	    cout << "Test #" << test << " : " << endl;
	    cout << ans << endl;
	    int dem =1;
	    for(int i=1; i<=n ;i++)
	    {
	    	if(a[i] > a[i-1])
	    	{
	    		++dem;
			}
			else
			{
				if(dem == ans)
				{
					for(int j=i-ans; j<i;j++)
					{
						cout << a[j] << " ";
					}
					cout << endl;
				}
				dem =1;
			}
		}
	}	
}
