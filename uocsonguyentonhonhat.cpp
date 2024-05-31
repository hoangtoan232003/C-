#include<bits/stdc++.h>
using namespace std;

bool snt(int n){
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		if(i==1) cout << 1 << endl;
		else if(i%2==0) cout << 2 << endl;
		else if(snt(i)) cout << i << endl;
		else for(int j=3; j*j<i;j+=2)
	{
		if(i%j==0) cout << j;
	}
	}
}
