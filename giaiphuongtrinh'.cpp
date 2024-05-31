#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,n,x; cin >> a >> b >> n;
	bool ans=false;
	for(int x=1;x<=n/a;x++)
	{
		if((n-a*x)%b==0)
		{
			ans = true;
			break;
		}
	}
	if(ans==true)
	{
		cout << "YES";
	}
	else cout << "NO";
}
