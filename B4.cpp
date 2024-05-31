#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	int m;
	char a[m];
	int tmp =0, sum =0;
	while(t--)
	{
		for(int i=0; i<m ;i++)
		{
			cin >> a[i];
			if(a[i] == '(')
			{
				tmp++;
				cout << tmp << " ";
			}
			else if(a[i] == ')')
			{
				cout << sum << " ";
				sum--;		
			}
		}
	}
	tmp = 0, sum =0;
	return 0;
}