#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; double tong=0;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
			tong +=(double)1/(2*i);

	}
	cout << fixed << setprecision(5) << tong;
}
