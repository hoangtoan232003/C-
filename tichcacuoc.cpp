#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long tich =1;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		if(n%i == 0)
		{
			tich *= i;
		}
	}
	cout << tich;
}
