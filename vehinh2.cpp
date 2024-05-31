#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	
	for(int i=n;i>0;i--)
	{
		for(int j=i;j>0;j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout << " ";
		}
		for(int j=1;j<=i;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout << " ";
		}
		for(int j=1;j<=i;j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i==1 || i==n || j==1 || j==i )
			{
				cout << "*";
			} else cout << " ";
		}
		cout << endl;
	}
}
