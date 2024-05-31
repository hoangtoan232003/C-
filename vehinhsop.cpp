#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int space = 1;space <= i;i++)
		{
			cout << "  ";
		}
		for(int j=1;j<=n;j++)
		{
			if(j==1 || j==n)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
