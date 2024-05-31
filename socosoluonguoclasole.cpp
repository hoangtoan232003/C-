#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n; cin >> n;
	long long can = sqrt(n);
	if(can * can == n)
	{
		
		cout << "YES";
	}
	else cout << "NO";
}
