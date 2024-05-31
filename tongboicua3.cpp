#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, tong=0;
	cin >> n;
	for(int i=0; i<=n; i+=3)
	{
			tong +=i;

	}
	cout << tong;
}
